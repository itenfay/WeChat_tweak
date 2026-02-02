//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCVTExternalConfig;

@interface TXCVideoEncodeConfig : NSObject
{
    _Bool _enablesBFrame;
    _Bool _realtime;
    _Bool _isAnnexB;
    _Bool _unlimitedGop;
    _Bool _enablesRps;
    _Bool _enablesRoi;
    _Bool _enablesTranscoding;
    int _strategy;
    int _rcMethod;
    int _encodeUsage;
    long long _frameRate;
    long long _bitrate;
    long long _gop;
    double _bitrateTolerance;
    double _maxBitrateRatio;
    long long _minQP;
    long long _maxQP;
    long long _idrFrameRate;
    long long _baseFrameIndex;
    long long _baseGopIndex;
    TXCVTExternalConfig *_vtExternalConfig;
    struct CGSize _resolution;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVTExternalConfig *vtExternalConfig; // @synthesize vtExternalConfig=_vtExternalConfig;
@property(nonatomic) _Bool enablesTranscoding; // @synthesize enablesTranscoding=_enablesTranscoding;
@property(nonatomic) _Bool enablesRoi; // @synthesize enablesRoi=_enablesRoi;
@property(nonatomic) long long baseGopIndex; // @synthesize baseGopIndex=_baseGopIndex;
@property(nonatomic) long long baseFrameIndex; // @synthesize baseFrameIndex=_baseFrameIndex;
@property(nonatomic) long long idrFrameRate; // @synthesize idrFrameRate=_idrFrameRate;
@property(nonatomic) _Bool enablesRps; // @synthesize enablesRps=_enablesRps;
@property(nonatomic) long long maxQP; // @synthesize maxQP=_maxQP;
@property(nonatomic) long long minQP; // @synthesize minQP=_minQP;
@property(nonatomic) double maxBitrateRatio; // @synthesize maxBitrateRatio=_maxBitrateRatio;
@property(nonatomic) double bitrateTolerance; // @synthesize bitrateTolerance=_bitrateTolerance;
@property(nonatomic) long long gop; // @synthesize gop=_gop;
@property(nonatomic) _Bool unlimitedGop; // @synthesize unlimitedGop=_unlimitedGop;
@property(nonatomic) _Bool isAnnexB; // @synthesize isAnnexB=_isAnnexB;
@property(nonatomic) _Bool realtime; // @synthesize realtime=_realtime;
@property(nonatomic) _Bool enablesBFrame; // @synthesize enablesBFrame=_enablesBFrame;
@property(nonatomic) int encodeUsage; // @synthesize encodeUsage=_encodeUsage;
@property(nonatomic) int rcMethod; // @synthesize rcMethod=_rcMethod;
@property(nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
- (float)vtDataRateLimitsMutiple;
- (unsigned long long)vtConfigFlagFromKey:(unsigned long long)arg1;
- (struct VideoEncodeParams)buildEncodeParams;
- (_Bool)updateRestartNeededParams:(const void *)arg1;
- (id)initWithStream:(int)arg1;
- (id)init;

@end

