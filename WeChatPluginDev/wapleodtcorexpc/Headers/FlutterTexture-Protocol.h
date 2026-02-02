//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FlutterTexture;

@protocol FlutterTexture <NSObject>
- (struct __CVBuffer *)copyPixelBuffer;

@optional
- (void)onTextureUnregistered:(NSObject<FlutterTexture> *)arg1;
@end

