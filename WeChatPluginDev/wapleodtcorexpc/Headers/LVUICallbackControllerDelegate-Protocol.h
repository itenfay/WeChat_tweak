//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppStore, NSString, UIViewController;
@protocol LiteAppParentViewControllerDelegate;

@protocol LVUICallbackControllerDelegate <NSObject>
@property(nonatomic) __weak UIViewController<LiteAppParentViewControllerDelegate> *liteAppParentViewController;
- (void)onLayoutComplete:(NSString *)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)onCheckLiteAppVersionError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(NSString *)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (LiteAppStore *)getStore;
- (void)onCheckBaseLibSumFail:(NSString *)arg1;
- (void)onCheckSumFail:(NSString *)arg1;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
- (void)navigateBackAndReloadDebug:(NSString *)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(NSString *)arg4;
- (void)showPage:(const void *)arg1;
- (_Bool)isHalfScreen;
- (NSString *)appId;
- (UIViewController *)getViewController;
@end

