#import "WCPLSettingViewController.h"

@interface WCPLSettingViewController (WCPLSettingsSelectionStore)

- (NSArray<NSString *> *)quitMonitorWhitelistedChatrooms;
- (NSArray<NSString *> *)ignoredChatroomUserNames;
- (NSArray<NSString *> *)ignoredUserNames;
- (NSArray<NSString *> *)wcpl_sanitizedUserNamesFromArray:(NSArray *)names;
- (NSArray<NSString *> *)wcpl_chatroomUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                   scene:(NSString *)scene;
- (NSArray<NSString *> *)wcpl_friendUserNamesFromArray:(NSArray<NSString *> *)userNames
                                                 scene:(NSString *)scene;
- (void)updateChatIgnoreInfoWithChatrooms:(NSArray *)chatrooms;
- (void)updateUserIgnoreInfoWithUsers:(NSArray *)users;
- (void)updateQuitMonitorWhitelistWithChatrooms:(NSArray *)chatrooms;

@end
