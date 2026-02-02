//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJCamLyricsStyle, OMJCaptureSession;

@interface OMJCamPreviewSettings : NSObject
{
    _Bool _shouldEnableImageSeqPrefetch;
    _Bool _shouldUseEchoCancellation;
    float _lensDirtyCheckThreshold;
    unsigned long long _dimensionLevel;
    OMJCamLyricsStyle *_defaultLyricsStyle;
    double _aigcGeneratingTimeout;
    OMJCaptureSession *_captureSession;
}

- (void).cxx_destruct;
@property(nonatomic) float lensDirtyCheckThreshold; // @synthesize lensDirtyCheckThreshold=_lensDirtyCheckThreshold;
@property(retain, nonatomic) OMJCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) double aigcGeneratingTimeout; // @synthesize aigcGeneratingTimeout=_aigcGeneratingTimeout;
@property(retain, nonatomic) OMJCamLyricsStyle *defaultLyricsStyle; // @synthesize defaultLyricsStyle=_defaultLyricsStyle;
@property(nonatomic) _Bool shouldUseEchoCancellation; // @synthesize shouldUseEchoCancellation=_shouldUseEchoCancellation;
@property(nonatomic) _Bool shouldEnableImageSeqPrefetch; // @synthesize shouldEnableImageSeqPrefetch=_shouldEnableImageSeqPrefetch;
@property(readonly, nonatomic) unsigned long long dimensionLevel; // @synthesize dimensionLevel=_dimensionLevel;
- (id)initWithDimensionLevel:(unsigned long long)arg1;

@end

