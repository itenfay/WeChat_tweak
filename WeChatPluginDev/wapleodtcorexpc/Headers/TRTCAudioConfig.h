//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCAudioConfig : NSObject
{
    _Bool _isEnabled;
    _Bool _isCustomCapture;
    _Bool _isAgcEnabled;
    _Bool _isAnsEnabled;
    _Bool _isEarMonitoringEnabled;
    _Bool _isVolumeEvaluationEnabled;
    _Bool _isVadDetectWhenVolumeEvaluate;
    long long _sampleRate;
    long long _route;
    long long _volumeType;
    long long _audioQuality;
    unsigned long long _volumeEvaluationInterval;
}

@property(nonatomic) _Bool isVadDetectWhenVolumeEvaluate; // @synthesize isVadDetectWhenVolumeEvaluate=_isVadDetectWhenVolumeEvaluate;
@property(nonatomic) unsigned long long volumeEvaluationInterval; // @synthesize volumeEvaluationInterval=_volumeEvaluationInterval;
@property(nonatomic) _Bool isVolumeEvaluationEnabled; // @synthesize isVolumeEvaluationEnabled=_isVolumeEvaluationEnabled;
@property(nonatomic) _Bool isEarMonitoringEnabled; // @synthesize isEarMonitoringEnabled=_isEarMonitoringEnabled;
@property(nonatomic) _Bool isAnsEnabled; // @synthesize isAnsEnabled=_isAnsEnabled;
@property(nonatomic) _Bool isAgcEnabled; // @synthesize isAgcEnabled=_isAgcEnabled;
@property(nonatomic) long long audioQuality; // @synthesize audioQuality=_audioQuality;
@property(nonatomic) long long volumeType; // @synthesize volumeType=_volumeType;
@property(nonatomic) long long route; // @synthesize route=_route;
@property(nonatomic) _Bool isCustomCapture; // @synthesize isCustomCapture=_isCustomCapture;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (unsigned long long)currVolumeEvaluationInterval;
- (void)saveToLocal;
- (void)loadFromLocal;
- (void)dealloc;
- (id)init;

@end

