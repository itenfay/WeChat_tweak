//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMCVocalEnhancementParams : NSObject
{
    _Bool _isEqualizerEnabled;
    _Bool _isAmplifierEnabled;
    _Bool _amplifierCanClip;
    _Bool _isCompressorEnabled;
    _Bool _compressorNormalize;
    _Bool _compressorUsePeak;
    _Bool _isMatchLoudnessEnabled;
    _Bool _isDenoiserSSEnabled;
    _Bool _isLoudnessEQEnabled;
    float _compressorThresholdDB;
    float _compressorNoiseFloorDB;
    float _compressorRatio;
    float _compressorAttackTime;
    float _compressorReleaseTime;
    float _defaultLoudness;
    float _minLoudness;
    float _maxLoudness;
    long long _equalizerCurveType;
    NSArray *_equalizerPeakingFiltersParams;
    NSArray *_equalizerPoints;
    long long _amplifierType;
    double _amplifierValue;
    long long _matchLoudnessType;
    double _matchLoudnessValue;
}

- (void).cxx_destruct;
@property(nonatomic) float maxLoudness; // @synthesize maxLoudness=_maxLoudness;
@property(nonatomic) float minLoudness; // @synthesize minLoudness=_minLoudness;
@property(nonatomic) float defaultLoudness; // @synthesize defaultLoudness=_defaultLoudness;
@property(nonatomic) _Bool isLoudnessEQEnabled; // @synthesize isLoudnessEQEnabled=_isLoudnessEQEnabled;
@property(nonatomic) _Bool isDenoiserSSEnabled; // @synthesize isDenoiserSSEnabled=_isDenoiserSSEnabled;
@property(nonatomic) double matchLoudnessValue; // @synthesize matchLoudnessValue=_matchLoudnessValue;
@property(nonatomic) long long matchLoudnessType; // @synthesize matchLoudnessType=_matchLoudnessType;
@property(nonatomic) _Bool isMatchLoudnessEnabled; // @synthesize isMatchLoudnessEnabled=_isMatchLoudnessEnabled;
@property(nonatomic) _Bool compressorUsePeak; // @synthesize compressorUsePeak=_compressorUsePeak;
@property(nonatomic) _Bool compressorNormalize; // @synthesize compressorNormalize=_compressorNormalize;
@property(nonatomic) float compressorReleaseTime; // @synthesize compressorReleaseTime=_compressorReleaseTime;
@property(nonatomic) float compressorAttackTime; // @synthesize compressorAttackTime=_compressorAttackTime;
@property(nonatomic) float compressorRatio; // @synthesize compressorRatio=_compressorRatio;
@property(nonatomic) float compressorNoiseFloorDB; // @synthesize compressorNoiseFloorDB=_compressorNoiseFloorDB;
@property(nonatomic) float compressorThresholdDB; // @synthesize compressorThresholdDB=_compressorThresholdDB;
@property(nonatomic) _Bool isCompressorEnabled; // @synthesize isCompressorEnabled=_isCompressorEnabled;
@property(nonatomic) _Bool amplifierCanClip; // @synthesize amplifierCanClip=_amplifierCanClip;
@property(nonatomic) double amplifierValue; // @synthesize amplifierValue=_amplifierValue;
@property(nonatomic) long long amplifierType; // @synthesize amplifierType=_amplifierType;
@property(nonatomic) _Bool isAmplifierEnabled; // @synthesize isAmplifierEnabled=_isAmplifierEnabled;
@property(retain, nonatomic) NSArray *equalizerPoints; // @synthesize equalizerPoints=_equalizerPoints;
@property(retain, nonatomic) NSArray *equalizerPeakingFiltersParams; // @synthesize equalizerPeakingFiltersParams=_equalizerPeakingFiltersParams;
@property(nonatomic) long long equalizerCurveType; // @synthesize equalizerCurveType=_equalizerCurveType;
@property(nonatomic) _Bool isEqualizerEnabled; // @synthesize isEqualizerEnabled=_isEqualizerEnabled;
- (id)description;
- (id)init;

@end

