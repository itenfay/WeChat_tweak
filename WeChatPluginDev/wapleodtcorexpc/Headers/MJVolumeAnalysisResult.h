//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJVolumeAnalysisResult : NSObject
{
    _Bool _isLowLoudness;
    double _loudnessDecibel;
}

@property(readonly, nonatomic) double loudnessDecibel; // @synthesize loudnessDecibel=_loudnessDecibel;
@property(readonly, nonatomic) _Bool isLowLoudness; // @synthesize isLowLoudness=_isLowLoudness;
- (id)description;
- (id)initWithIsLowLoudness:(_Bool)arg1 loudnessDecibel:(double)arg2;

@end

