//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MegaVideoCommCallback, NSString, UIViewController;

@interface LVNativePlugin : NSObject
{
    UIViewController *_currentViewController;
    MegaVideoCommCallback *_commCallbackApi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MegaVideoCommCallback *commCallbackApi; // @synthesize commCallbackApi=_commCallbackApi;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)markStarFeed:(id)arg1 starContext:(id)arg2 commentscene:(long long)arg3 snapshotInfo:(id)arg4 error:(id *)arg5;
- (id)remarkForWechatUserUsername:(id)arg1 error:(id *)arg2;
- (void)showLastExitFeedHintFeed:(id)arg1 error:(id *)arg2;
- (void)showSharePanelFeed:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)updatePlaySessionIdPlaySessionId:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)minimizePlayerId:(long long)arg1 error:(id *)arg2;
- (void)didGetGestureEventIsHandled:(_Bool)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (id)getInitMainFeedListContextWithError:(id *)arg1;
- (void)openKitchenType:(long long)arg1 feed:(id)arg2 params:(id)arg3 error:(id *)arg4;
- (void)openWatchLaterListTicket:(id)arg1 error:(id *)arg2;
- (void)openFeedPlayerDetailCheckroomTicket:(id)arg1 openParamsBytes:(id)arg2 error:(id *)arg3;
- (void)onMegaVideoCommCallbackWithKey:(id)arg1 data:(id)arg2;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

