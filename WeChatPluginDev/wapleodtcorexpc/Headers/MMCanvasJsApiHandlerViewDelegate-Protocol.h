//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSValue, MMWebCanvasLayoutData, NSString;

@protocol MMCanvasJsApiHandlerViewDelegate <NSObject>
- (long long)onGetFPS:(NSString *)arg1;
- (void)onSaveLayoutData:(MMWebCanvasLayoutData *)arg1 forCanvasId:(NSString *)arg2;
- (void)onSaveCanvasHeight:(double)arg1;
- (MMWebCanvasLayoutData *)onGetLayoutDataForCanvasId:(NSString *)arg1;
- (_Bool)isCanvasViewInBackground;
- (_Bool)isCanvasViewAppear;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewHeight;
- (double)getCanvasViewWidth;

@optional
- (JSValue *)getJsCanvas;
@end

