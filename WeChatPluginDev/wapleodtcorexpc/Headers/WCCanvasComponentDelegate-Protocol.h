//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableView, MMUIViewController, NSArray, NSMutableDictionary, NSNumber, NSString, POIInfo, UIColor, UIImage, UIView, UIViewController, WCAdCanvasLoadParams, WCAdDynamicCanvasServerData, WCAdExpressionCanvasHalfScreenJumpInfo, WCAdRandomPickCardLogic, WCAdWeAppInfo, WCAdvertiseInfo, WCCanvasComponent, WCCanvasComponentItem, WCCanvasMusicMgr, WCCanvasReportMgr, WCDataItem, WCWeAppBizTempSessionInfo;
@protocol YYWebViewInterface;

@protocol WCCanvasComponentDelegate <NSObject>
- (_Bool)isSearchCanvas;
- (void)hideLoading;
- (void)showLoadingWithText:(NSString *)arg1 delayAnimation:(double)arg2 block:(_Bool)arg3 autoHideInterval:(double)arg4;
- (void)showLoadingWithAutoHideInterval:(double)arg1;
- (void)showLoading;
- (NSString *)appendParamsToUrl:(NSString *)arg1 andUpdateExtraInfo:(inout NSMutableDictionary *)arg2 withComponentItem:(WCCanvasComponentItem *)arg3;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willPresentUrl:(NSString *)arg2;
- (_Bool)canvasComponent:(WCCanvasComponent *)arg1 willJumpToDynamicCanvas:(WCAdDynamicCanvasServerData *)arg2 canvasLoadParams:(WCAdCanvasLoadParams *)arg3;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willJumpToCanvas:(NSString *)arg2 canvasId:(NSString *)arg3 pageScene:(int)arg4;
- (_Bool)canvasComponent:(WCCanvasComponent *)arg1 isChildViewController:(MMUIViewController *)arg2;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willShowViewController:(MMUIViewController *)arg2;
- (void)canvasComponent:(WCCanvasComponent *)arg1 willAddViewController:(MMUIViewController *)arg2;
- (void)onCloseCanvasByComponent:(WCCanvasComponent *)arg1;
- (void)canvasComponentItem:(WCCanvasComponentItem *)arg1 willExistAndJumpUrl:(NSString *)arg2;

@optional
- (WCCanvasMusicMgr *)getMusicMgr;
- (_Bool)isCanvasOpenedInShareScene;
- (void)addPreloadWebviewInCacheArray:(UIView<YYWebViewInterface> *)arg1 andKey:(NSString *)arg2;
- (void)updateFloatJumpViewVisibility:(_Bool)arg1;
- (void)onComponentVideoPlayEnd:(WCCanvasComponent *)arg1 isFullScreen:(_Bool)arg2;
- (void)onPureImageLongPressWithImage:(UIImage *)arg1 url:(NSString *)arg2 componentType:(unsigned long long)arg3 qrExtInfo:(NSString *)arg4 directJump:(_Bool)arg5 scanComplete:(void (^)(_Bool))arg6;
- (void)componentSizeDidChanged;
- (void)updateAdData;
- (WCAdExpressionCanvasHalfScreenJumpInfo *)onComponentFetchHalfScreenJumpInfo;
- (_Bool)onComponentShouldHideRandomLayoutChosenComponent;
- (NSString *)fetchRandomLayoutChosenRandomCardId;
- (WCDataItem *)fetchDataItem;
- (WCAdvertiseInfo *)fetchAdvertiseInfo;
- (void)onRandomPickCardComponentQuickSwitchAnimationIsDone;
- (_Bool)onRandomPickCardComponentIsReadyToPlayQuickSwitchAnimation;
- (_Bool)onRandomPickCardComponentIsCardSelectedPreviouslyWithCardId:(NSString *)arg1;
- (_Bool)onRandomPickCardComponentIsCardSelectedWithCardId:(NSString *)arg1;
- (void)onRandomPickCardComponentDidClick:(NSString *)arg1 isPicked:(_Bool)arg2;
- (WCAdRandomPickCardLogic *)onRandomPickCardComponentFetchRandomPickCardLogic;
- (_Bool)onComponentTryToControlManuallyFloatView:(_Bool)arg1;
- (void)onComponentTryToShareRedEnvelopWithGiveCardId:(NSString *)arg1 title:(NSString *)arg2 desc:(NSString *)arg3 thumbUrl:(NSString *)arg4;
- (void)onComponentTryToShareWithType:(long long)arg1;
- (void)onComponentBeClicked:(WCCanvasComponentItem *)arg1;
- (void)onBtnComponentClick:(long long)arg1;
- (void)triggerToShowFloatView:(NSString *)arg1 triggerId:(NSString *)arg2;
- (NSString *)tryAppendAdParamsForWeappPath:(NSString *)arg1;
- (_Bool)getUseSnsCdnDownloadMode:(WCCanvasComponent *)arg1;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(NSString *)arg2;
- (NSString *)getWeAppSceneNoteForComponentItem:(WCCanvasComponentItem *)arg1;
- (void)reloadData;
- (void)jumpToCanvasInHalfScreenWithInfo:(NSString *)arg1 uxInfo:(NSString *)arg2 noStore:(_Bool)arg3;
- (void)jumpToWeAppInHalfScreenWithInfo:(WCAdWeAppInfo *)arg1 sceneNote:(NSString *)arg2;
- (void)jumpToWeAppBizTempSessionWithInfo:(WCWeAppBizTempSessionInfo *)arg1;
- (void)hideActionSheet;
- (void)showActionSheet:(NSString *)arg1 body:(WCCanvasComponentItem *)arg2 withIcon:(NSString *)arg3 hideHeader:(_Bool)arg4 showCancelAction:(_Bool)arg5;
- (void)jumpToPhonePage:(NSArray *)arg1;
- (void)jumpToLocationPage:(POIInfo *)arg1;
- (NSString *)fetchCanvasId;
- (NSString *)getSnsId;
- (NSString *)getAdUxInfoByWhetherUseSharedFirst:(_Bool)arg1;
- (WCCanvasReportMgr *)getReportMgr;
- (NSString *)fetchCanvasDynamicInfo;
- (double)fetchVideoContinuePlayIntervalForComponentItem:(WCCanvasComponentItem *)arg1;
- (void)updateDestComponentForSpecialAnimWith:(WCCanvasComponent *)arg1;
- (void)updateVideoComponentPlayingState:(_Bool)arg1;
- (void)jumpStreamVideoForSightComponent:(WCCanvasComponent *)arg1;
- (UIView<YYWebViewInterface> *)getCacheWebviewWithUrl:(NSString *)arg1;
- (UIViewController *)getCurrentViewController;
- (MMTableView *)fetchCanvasTableView;
- (unsigned int)getComponentDownloadScene;
- (NSNumber *)getCanvasOriginScene;
- (void)getCanvasScene:(int *)arg1;
- (_Bool)onComponentIsCanvasVisible;
- (_Bool)isCanvasInHalfScreenMode;
- (_Bool)shouldHideVideoFullScreenButton;
- (_Bool)shouldVideoLayerRasterize;
- (_Bool)shouldVideoComponentTryToPlay:(long long)arg1;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (UIColor *)getBackGroundColorAtSection:(long long)arg1;
- (UIColor *)getBackGroundColorWhenLoading:(long long)arg1;
- (void)dimScrollDownArea:(long long)arg1;
- (void)lightScrollDownArea:(long long)arg1;
- (void)hideDownArrowIcon;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)canvasComponent:(WCCanvasComponent *)arg1 shouldForceHideArrowDownImage:(_Bool)arg2;
@end

