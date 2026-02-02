//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCAdExpressionCanvasHalfScreenJumpInfo, WCAdWeAppInfo;

@protocol WCCanvasPageViewControllerDelegate <NSObject>

@optional
- (WCAdExpressionCanvasHalfScreenJumpInfo *)onHalfScreenCanvasFetchHalfScreenJumpInfo;
- (void)onHalfScreenCanvasJumpToCanvas:(NSString *)arg1 uxInfo:(NSString *)arg2 noStore:(_Bool)arg3;
- (void)onHalfScreenCanvasJumpToWeApp:(WCAdWeAppInfo *)arg1 sceneNote:(NSString *)arg2;
- (void)onHalfScreenCanvasJumpToH5:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (double)onHalfScreenCanvasGetMaxHalfScreenHeight;
- (void)onCloseCanvasPageView;
@end

