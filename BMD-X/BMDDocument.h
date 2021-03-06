//
//  BMDDocument.h
//  BMD-X
//
//  Created by Steven Fuchs on 1/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LockableText.h"

@class CSpoiledTextField;
@class AppDelegate;
@class CLineItem;
@class CFieldJumper;
@class CNoSpaceAutoTextField;

@interface BMDDocument : NSDocument {

@public
    IBOutlet	NSTextField*            msSurnameFld;
    IBOutlet	CNoSpaceAutoTextField*            msFirstnameFld;
    IBOutlet	NSTextField*            mTheoryLabel;
    IBOutlet	NSTextField*            mCommentLabel;
    IBOutlet	NSTextField*            mHashLabel;
    IBOutlet	NSTextField*            msDistrictFld;

    
    IBOutlet	NSTextField*            msVolumeFld;
    IBOutlet	NSTextField*            msPageFld;
    IBOutlet	CNoSpaceAutoTextField*            msMiddleNameFld;
    IBOutlet	CNoSpaceAutoTextField*            msSpareFld1;
    IBOutlet	CNoSpaceAutoTextField*            msSpareFld2;
    IBOutlet	CNoSpaceAutoTextField*            msSpareFld3;
    IBOutlet	CNoSpaceAutoTextField*            msSpareFld4;
    IBOutlet	NSTextField*            msMotherSpouse;
    IBOutlet	NSTextField*            msMotherSpouseLabel;
    IBOutlet	NSTextField*            msDistrictLabel;
    IBOutlet    NSWindow*               mWindow;

    
@protected

    IBOutlet	AppDelegate*               mAppDelegate;
    IBOutlet	NSButton*               msLockedBtn;
    IBOutlet	NSButton*               msCapsBtn;

    IBOutlet	NSTextField*            pageFieldSolo;
    IBOutlet	NSTextField*            yearField;
    IBOutlet	NSTextField*			pageField;
    IBOutlet	NSTextField*			commentField;
    IBOutlet	NSPopUpButton*          commentMenu;
    IBOutlet	NSPopUpButton*          formatMenu;
    IBOutlet	NSPopUpButton*          quarterMenu;
    IBOutlet	NSTextField*            rangeField;
    IBOutlet	NSTextField*			freeBMDRefField;
    IBOutlet	NSTextField*			locationField;
    IBOutlet	NSTextField*			fieldsQueue;
    IBOutlet	NSDatePicker*			dateField;
    
    
    IBOutlet	NSTextField*            emailField;
    IBOutlet	NSTextField*			passwordField;
    IBOutlet	NSPopUpButton*          orderMenu;
    IBOutlet	NSPopUpButton*          typeMenu;
    
    IBOutlet	NSPanel*				mPageWindow;
    IBOutlet	NSPanel*				mCommentWindow;
    IBOutlet	NSPanel*				mEntryWindow;
    IBOutlet	NSPanel*				mSourceWindow;
    IBOutlet    NSTextView*             textView;
    IBOutlet    NSScrollView*           scrollView;
    
    NSAttributedString *mString;
    NSMutableDictionary *mNameBook;
    NSMutableArray* mFirstNameBook;
    NSString*     lastTypedString;
    NSString*       mEnteredYear;
    NSString*       mEnteredMonth;
    
    CSpoiledTextField*  mFieldEditor;
    BOOL mMarkedFlag;
    BOOL mAmDoingAutoComplete;
    
    BOOL mModernMarraige;
    BOOL mModernBirth;
    
    CLineItem *mLineItem;
    CFieldJumper*   mJumper;
    
@private
}
- (NSAttributedString *) string;
- (BOOL)spareFieldOpening:(id)fieldOb;

- (void) setString: (NSAttributedString *) value;
- (void)textFieldClosing:(id)fieldOb;
- (void)textFieldUnClosing:(id)fieldOb;
- (NSString *)getCompletionOf:(NSControl *)control with:(NSString *)starter  indexOfSelectedItem:(NSUInteger)index;

- (void)fieldText:(id)fieldOb;
- (BOOL)textShouldBeginEditing:(NSText *)aTextObject;

- (IBAction)setSurNameLock:(id)sender;
- (void)scrollToTop:(id)sender;

- (void)textDidBeginEditing:(NSNotification *)aNotification;

- (IBAction)sendBreak:(id)sender;
- (IBAction)startPage:(id)sender;
- (IBAction)okPageDLOG:(id)sender;
- (IBAction)cancelPage:(id)sender;

- (IBAction)startComment:(id)sender;
- (IBAction)changeCommentType:(id)sender;
- (IBAction)okCommentDLOG:(id)sender;
- (IBAction)cancelComment:(id)sender;

    - (IBAction)startEntry:(id)sender;
    - (IBAction)okEntryDLOG:(id)sender;
    - (IBAction)cancelEntry:(id)sender;

    - (IBAction)startSource:(id)sender;
    - (IBAction)okSourceDLOG:(id)sender;
    - (IBAction)cancelSource:(id)sender;

    - (IBAction)cancelAction:(NSWindow *)sheet returnCode:(int)returnCode contextInfo:(void *)contextInfo;

- (CSpoiledTextField*)getFieldEditor;
@end
