#import "WCPLSettingViewController.h"

@interface WCPLSettingViewController (WCPLSettingsSelectionCoordinator)

- (void)showBlackList;
- (void)showGroupDenyList;
- (void)showIgnoredChatroomList;
- (void)showIgnoredUserList;
- (void)showQuitMonitorWhitelistSelector;
- (void)resetAllIgnoredUsers;

@end
