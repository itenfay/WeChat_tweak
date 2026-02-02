//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonCameraEffectConfig, NSURL;

@interface EmoticonVideoConvertConfig : NSObject
{
    _Bool _isSupportWxAM;
    _Bool _forceFitSize;
    _Bool _isFastPlay;
    int _wxamQuality;
    NSURL *_videoUrl;
    unsigned long long _normalFPS;
    unsigned long long _fastFPS;
    double _cornerRadius;
    EmoticonCameraEffectConfig *_effectConfig;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCameraEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long fastFPS; // @synthesize fastFPS=_fastFPS;
@property(nonatomic) unsigned long long normalFPS; // @synthesize normalFPS=_normalFPS;
@property(nonatomic) _Bool isFastPlay; // @synthesize isFastPlay=_isFastPlay;
@property(nonatomic) _Bool forceFitSize; // @synthesize forceFitSize=_forceFitSize;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) int wxamQuality; // @synthesize wxamQuality=_wxamQuality;
@property(nonatomic) _Bool isSupportWxAM; // @synthesize isSupportWxAM=_isSupportWxAM;
- (id)init;

@end

