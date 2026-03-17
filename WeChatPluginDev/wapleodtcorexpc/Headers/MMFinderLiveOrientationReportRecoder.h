//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveOrientationReportRecoder : NSObject
{
    _Bool _isStartRecord;
    unsigned long long _portraitDuration;
    unsigned long long _landscapeDuration;
    unsigned long long _currOrientationStartTime;
    long long _currOrientation;
}

@property(nonatomic) _Bool isStartRecord; // @synthesize isStartRecord=_isStartRecord;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(nonatomic) unsigned long long currOrientationStartTime; // @synthesize currOrientationStartTime=_currOrientationStartTime;
@property(nonatomic) unsigned long long landscapeDuration; // @synthesize landscapeDuration=_landscapeDuration;
@property(nonatomic) unsigned long long portraitDuration; // @synthesize portraitDuration=_portraitDuration;
- (void)updateCurrOrientationStartTime;
- (void)updatePreOrientationModeDuration:(long long)arg1;
- (_Bool)checkIsOrientationModeChange:(long long)arg1 preOri:(long long)arg2;
- (void)updateCurrOrientation:(long long)arg1;
- (void)endRecord;
- (void)startRecord;

@end

