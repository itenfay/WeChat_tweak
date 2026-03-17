//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseScanLogicController, NSString, UIImage, UINavigationController, UIViewController;

@protocol BaseScanLogicDelegate <NSObject>

@optional
- (unsigned int)getUISessionID;
- (void)callDismissCamearaScanViewCotroller:(void (^)(void))arg1;
- (void)callSetHoleMaskViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)callSetupHoleMaskViewWithHoleFrame:(struct CGRect)arg1;
- (void)callSetTabMaskViewHidden:(_Bool)arg1;
- (void)setSwipeGestureEnable:(_Bool)arg1;
- (void)startLogicCtrlHandler:(long long)arg1 tabAction:(long long)arg2;
- (void)stopCurrLogicCtrlHandler;
- (void)tabSwitchWithDiffValue:(long long)arg1 tabAction:(long long)arg2;
- (_Bool)shouldViewControllerDisplayRecentPhotoBubble;
- (void)onFetchedLastAssetOriginImage:(UIImage *)arg1 ThumbImage:(UIImage *)arg2;
- (void)stopAndHideLoadingView;
- (void)showAndStartLoadingView:(NSString *)arg1;
- (void)shouldHideInteracitvesBtns:(_Bool)arg1;
- (_Bool)isTorchViewHiddenNow;
- (double)getCloseBtnCenterY;
- (double)getTabViewHeight;
- (_Bool)shouldHandleDetectResult:(BaseScanLogicController *)arg1;
- (void)onScanCodeFinish;
- (double)getZoomFactor;
- (void)onSetCameraZoomFactor:(double)arg1;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onScanRequestTimeout;
- (void)onScanInUnreachableNetworkStatus;
- (void)onScanEnds;
- (void)didShowScanResult;
- (float)getBottomBarHeight;
- (struct CGRect)getContentRect;
- (UIViewController *)getMainViewController;
- (void)onShowAlertWording;
- (void)setInfoLabelHidden:(_Bool)arg1 bAnim:(_Bool)arg2;
- (void)onUpdateWording;
- (void)onTakePhotoButtonClicked;
- (void)onMyQRButtonClicked;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onDetectSuccess;
- (void)onEdgePanGestureRecognizerChanged:(_Bool)arg1;
- (void)onPopFromStack;
- (void)onDismissModalViewControllerAnimated:(_Bool)arg1;
- (void)onPresentModalViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(UIViewController *)arg1 animated:(_Bool)arg2;
- (UINavigationController *)getNavigationController;
- (_Bool)isActiveLogicController:(BaseScanLogicController *)arg1;
- (_Bool)isNetworkDisconnect;
@end

