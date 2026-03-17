//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMWebJsCanvasViewPortDelegate <NSObject>
- (_Bool)isCanvasViewInBackground:(NSString *)arg1;
- (_Bool)isCanvasViewAppear:(NSString *)arg1;
- (double)getCanvasViewVisibleContainerHeight:(NSString *)arg1;
- (double)getCanvasViewVisibleOffsetY:(NSString *)arg1;
- (double)getCanvasViewHeight:(NSString *)arg1;
- (double)getCanvasViewWidth:(NSString *)arg1;

@optional
- (long long)getFPS:(NSString *)arg1;
- (void)onItemClick:(unsigned int)arg1 fromCanvasId:(NSString *)arg2;
- (id)getInfoWithKey:(NSString *)arg1;
- (void)deleteCanvasCard:(unsigned int)arg1;
- (void)canvasClosePopUp:(NSString *)arg1 fromCanvasId:(NSString *)arg2;
- (void)canvasPopUp:(NSString *)arg1 fromCanvasId:(NSString *)arg2 rect:(struct CGRect)arg3 hexColor:(NSString *)arg4 mode:(unsigned int)arg5 closeBlock:(void (^)(void))arg6;
- (void)canvasSetHeight:(double)arg1 canvasId:(NSString *)arg2;
@end

