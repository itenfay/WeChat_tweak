//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, NSDictionary, NSString, OMJAspectRatio;

@interface OMCClipSegment
{
}

@property(readonly, nonatomic) SharedPtr_def310aa backingClip;
@property(readonly, nonatomic) SharedPtr_def5e935 backingClipSegment;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool isDigiZoomEnabled;
@property(nonatomic) struct CGRect contentCropRegion;
- (CDStruct_1b6d18a9)mapToClipTimeFromMediaTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mapToMediaTimeFromClipTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) CDStruct_1b6d18a9 modificationTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 creationTime;
@property(readonly, nonatomic) NSString *layerBlendingModeName;
@property(nonatomic) unsigned long long layerBlendingMode;
@property(nonatomic) float layerOpacity;
@property(readonly, nonatomic) _Bool isContentSpatialAdjusted;
@property(nonatomic) unsigned long long contentScaleMode;
@property(nonatomic) unsigned long long contentRotationMode;
@property(nonatomic) unsigned long long contentFlipMode;
@property(readonly, nonatomic) CDStruct_e83c9415 absoluteTimeRange;
- (_Bool)updateSpeedRatio:(double)arg1;
- (void)clearSpeedAdjustment;
- (void)endSpeedAdjustmentSession;
- (void)beginSpeedAdjustmentSession;
@property(readonly, nonatomic) double speedRatio;
@property(nonatomic) float gain;
@property(nonatomic) _Bool isEnabled;
@property(nonatomic) double phaseOutDuration;
@property(nonatomic) double phaseInDuration;
@property(nonatomic) _Bool isAudioMuted;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _Bool canAdjustVolume;
@property(readonly, nonatomic) _Bool isPictureParamAdjusted;
@property(nonatomic) float vignette;
@property(nonatomic) float blur;
@property(nonatomic) float sharpness;
@property(readonly, nonatomic) _Bool isColorAdjusted;
@property(nonatomic) float tint;
@property(nonatomic) float hue;
@property(nonatomic) float exposure;
@property(nonatomic) float vibrance;
@property(nonatomic) float temperature;
@property(nonatomic) float saturation;
@property(nonatomic) float contrast;
@property(nonatomic) float brightness;
@property(readonly, nonatomic) _Bool isFilterAdjusted;
@property(nonatomic) float filterIntensity;
@property(retain, nonatomic) NSString *filterOptions;
@property(nonatomic) _Bool isFilterEnabled;
@property(retain, nonatomic) NSString *filterID;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInMedia;
@property(readonly, nonatomic) CDStruct_e83c9415 boundingTimeRangeInMedia;
@property(readonly, nonatomic) OMJAspectRatio *aspectRatio;
@property(readonly, nonatomic) NSString *phLocalIdentifier;
@property(readonly, nonatomic) NSDictionary *mediaFileMetadata;
@property(readonly, nonatomic) NSString *mediaFileURL;
@property(readonly, nonatomic) NSString *mediaFilePath;
@property(readonly, nonatomic) _Bool hasAudioWaveform;
@property(readonly, nonatomic) _Bool isSynthType;
@property(readonly, nonatomic) _Bool isImageType;
@property(readonly, nonatomic) _Bool hasVisual;
@property(readonly, nonatomic) _Bool hasAudio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

