//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCAdWeAppInfo;

@protocol WCAdDynamicCanvasViewControllerDelegate <NSObject>

@optional
- (void)onHalfScreenCanvasJumpToCanvas:(NSString *)arg1 uxInfo:(NSString *)arg2 canvasDynamicInfo:(NSString *)arg3 noStore:(_Bool)arg4;
- (void)onHalfScreenCanvasJumpToWeApp:(WCAdWeAppInfo *)arg1 sceneNote:(NSString *)arg2;
- (void)onHalfScreenCanvasJumpToH5:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
@end

