//
// WCPLLoadingViewHelpers.h
//
// 统一 MMLoadingView 创建/启停流程，减少重复实现与 selector/KVC 扩散。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLLoadingViewCreateAndStart(UIView * _Nullable hostView,
                                                            NSString * _Nullable text,
                                                            BOOL blockInteraction);
FOUNDATION_EXPORT void WCPLLoadingViewSetText(id _Nullable loadingView, NSString * _Nullable text);
FOUNDATION_EXPORT void WCPLLoadingViewStop(id _Nullable loadingView);
FOUNDATION_EXPORT void WCPLLoadingViewStopWithResult(id _Nullable loadingView,
                                                     BOOL ok,
                                                     NSString * _Nullable text);

NS_ASSUME_NONNULL_END

