//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPCapability : NSObject
{
}

+ (_Bool)isDRMSupport:(long long)arg1;
+ (_Bool)isFairPlaySupport;
+ (id)getDRMCapabilities;
+ (long long)nativeDrmTypeToTPDrmType:(int)arg1;
+ (double)maxPlaySpeed;
+ (_Bool)supportMetal;
+ (_Bool)isPictureInPictureSupported;
+ (_Bool)isACodecCapabilitySupport:(long long)arg1 codecid:(long long)arg2 profile:(int)arg3 level:(int)arg4;
+ (_Bool)isHDRsupport:(long long)arg1 profile:(int)arg2 level:(int)arg3;
+ (_Bool)isHighFrameRateHDR10SupportedWithFps:(int)arg1;
+ (_Bool)isHDR10Supported;
+ (_Bool)isDolbyDSSupported;
+ (_Bool)isDDPlusSupported;
+ (_Bool)isDDSupported;
+ (_Bool)isDolbyVisionSupported;
+ (id)getVCodecMaxCapability:(long long)arg1;
+ (id)getVCodecDecoderMaxCapability:(long long)arg1 codecId:(long long)arg2;
+ (_Bool)addVCodecBlacklist:(long long)arg1 codecId:(long long)arg2 blackPropertyRange:(id)arg3;
+ (_Bool)isVCodecCapabilityCanSupport:(long long)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5 framerate:(int)arg6;
+ (_Bool)isVCodecCapabilityCanSupport:(long long)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5;
+ (_Bool)isVCodecCapabilitySupport:(long long)arg1 codecId:(long long)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6 framerate:(int)arg7;
+ (_Bool)isVCodecCapabilitySupport:(long long)arg1 codecId:(long long)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6;

@end

