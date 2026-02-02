//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FlutterTexture;

@protocol FlutterTextureRegistry <NSObject>
- (void)unregisterTexture:(long long)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (long long)registerTexture:(NSObject<FlutterTexture> *)arg1;
@end

