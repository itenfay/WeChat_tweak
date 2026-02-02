//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPThumbplayerCapabilityHelper : NSObject
{
}

+ (_Bool)addACodecWhitelist:(int)arg1 codecid:(int)arg2 whiteProperty:(struct TPACodecPropertyRange)arg3;
+ (_Bool)addACodecBlacklist:(int)arg1 codecid:(int)arg2 blackProperty:(struct TPACodecPropertyRange)arg3;
+ (_Bool)isACodecCapabilitySupport:(int)arg1 codecid:(int)arg2 samplerate:(int)arg3 channels:(int)arg4 bitrate:(int)arg5 profile:(int)arg6 level:(int)arg7;
+ (_Bool)isACodecCapabilitySupport:(int)arg1 codecid:(int)arg2 profile:(int)arg3 level:(int)arg4;
+ (_Bool)isHDR10Supported;
+ (_Bool)isDolbyVisionSupported;
+ (_Bool)isHDRVividSupported;
+ (_Bool)isDRMsupport:(int)arg1;
+ (vector_e6ac3340)getDRMCapabilities;
+ (_Bool)isDolbyDSSupported;
+ (_Bool)isDDPlusSupported;
+ (_Bool)isDDSupported;
+ (struct TPVCodecMaxCapability)getVCodecMaxCapability:(int)arg1;
+ (map_21358acc)getVCodecDecoderMaxCapabilityMap:(int)arg1;
+ (_Bool)addVCodecWhitelist:(int)arg1 codecid:(int)arg2 whitePropertyRange:(struct TPVCodecPropertyRange)arg3;
+ (_Bool)addVCodecBlacklist:(int)arg1 codecid:(int)arg2 blackPropertyRange:(struct TPVCodecPropertyRange)arg3;
+ (_Bool)isVCodecCapabilityCanSupport:(int)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5 framerate:(int)arg6;
+ (_Bool)isVCodecCapabilityCanSupport:(int)arg1 width:(int)arg2 height:(int)arg3 profile:(int)arg4 level:(int)arg5;
+ (_Bool)isVCodecCapabilitySupport:(int)arg1 codecid:(int)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6 framerate:(int)arg7;
+ (_Bool)isVCodecCapabilitySupport:(int)arg1 codecid:(int)arg2 width:(int)arg3 height:(int)arg4 profile:(int)arg5 level:(int)arg6;

@end

