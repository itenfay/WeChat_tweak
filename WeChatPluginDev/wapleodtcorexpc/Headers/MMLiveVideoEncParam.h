//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveVideoEncParam : NSObject
{
    _Bool _enableAdjustRes;
    int _videoFps;
    int _videoBitrate;
    int _minVideoBitrate;
    long long _videoResolution;
    long long _resMode;
}

+ (long long)videoResolutionModeToTRTCType:(long long)arg1;
+ (long long)videoResolutionToTRTCType:(long long)arg1;
+ (long long)videoResolutionModeFromTRTCType:(long long)arg1;
+ (long long)videoResolutionFromTRTCType:(long long)arg1;
@property(nonatomic) _Bool enableAdjustRes; // @synthesize enableAdjustRes=_enableAdjustRes;
@property(nonatomic) int minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) long long resMode; // @synthesize resMode=_resMode;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;
- (id)genTRTCVideoEncParam;

@end

