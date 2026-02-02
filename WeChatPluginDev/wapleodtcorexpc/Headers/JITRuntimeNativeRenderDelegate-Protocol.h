//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MagicBrushEAGLLayerRT, NSString, UIView;

@protocol JITRuntimeNativeRenderDelegate <NSObject>

@optional
- (void)onProfilerFileGenerated:(NSString *)arg1 type:(NSString *)arg2;
- (void)onRenderTargetCreated:(MagicBrushEAGLLayerRT *)arg1;
- (void)onInsertView:(UIView *)arg1;
@end

