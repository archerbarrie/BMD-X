require "rubygems"
require "rake"

require "choctop"

ChocTop::Configuration.new do |s|
  # Remote upload target (set host if not same as Info.plist['SUFeedURL'])
  # s.host     = 'bmdx.com'
  s.remote_dir = '/path/to/upload/root/of/app'

  # Custom DMG
  s.name = 'BMD-X'
  s.background_file = "background.png"
  s.app_icon_position = [100, 90]
  s.applications_icon_position =  [400, 90]
  # s.volume_icon = "dmg.icns"
  # s.applications_icon = "appicon.icns" # or "appicon.png"
end
