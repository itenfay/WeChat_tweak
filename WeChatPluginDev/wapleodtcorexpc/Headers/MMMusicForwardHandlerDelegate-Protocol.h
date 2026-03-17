//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicForwardHandler, NSArray, WCForwardViewController;

@protocol MMMusicForwardHandlerDelegate <NSObject>
- (void)mmMusicForwardHandler:(MMMusicForwardHandler *)arg1 onShareToWcWithForwardViewController:(WCForwardViewController *)arg2 andSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandler:(MMMusicForwardHandler *)arg1 getForwardViewControllerAndPresent:(WCForwardViewController *)arg2;
- (void)mmMusicForwardHandler:(MMMusicForwardHandler *)arg1 onShareToFriends:(NSArray *)arg2 withSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandlerOnShareActionSuccess:(MMMusicForwardHandler *)arg1;
- (void)mmMusicForwardHandlerOnEndLoading:(MMMusicForwardHandler *)arg1;
- (void)mmMusicForwardHandlerOnStartLoading:(MMMusicForwardHandler *)arg1;
@end

