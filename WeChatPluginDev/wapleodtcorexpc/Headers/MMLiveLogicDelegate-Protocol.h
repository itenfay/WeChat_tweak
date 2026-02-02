//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveOperationView, MMLiveViewController, NSError, NSMutableDictionary;

@protocol MMLiveLogicDelegate <NSObject>

@optional
- (void)onForceUpdatePauseView;
- (void)onGetAnchorStatus;
- (void)onGetLiveInfo;
- (void)onLiveClosed:(NSError *)arg1 withExtraInfo:(NSMutableDictionary *)arg2;
- (void)onLiveClosed:(NSError *)arg1;
- (void)onShareLive:(NSError *)arg1;
- (void)onJoinLive:(NSError *)arg1;
- (void)onCreateLive:(NSError *)arg1;
- (MMLiveViewController *)getLiveViewControllerForLiveLogic;
- (MMLiveOperationView *)getLiveOperationView;
@end

