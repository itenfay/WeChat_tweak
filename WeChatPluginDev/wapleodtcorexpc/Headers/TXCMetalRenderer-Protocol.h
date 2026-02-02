//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCMetalDisplayConfig;
@protocol MTLCommandBuffer, MTLTexture, TXCMetalRenderTarget, TXCRenderCoordinate;

@protocol TXCMetalRenderer <NSObject>
- (id <MTLCommandBuffer>)drawToTarget:(id <TXCMetalRenderTarget>)arg1 coordinate:(id <TXCRenderCoordinate>)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)rendererType;

@optional
- (void)setDisplayConfig:(TXCMetalDisplayConfig *)arg1;
- (id <MTLCommandBuffer>)drawMetalTexture:(id <MTLTexture>)arg1 toTarget:(id <TXCMetalRenderTarget>)arg2 coordinate:(id <TXCRenderCoordinate>)arg3;
@end

