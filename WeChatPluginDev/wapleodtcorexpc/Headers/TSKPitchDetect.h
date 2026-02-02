//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSKPitchDetect : NSObject
{
    struct unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> _pd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nonRealTimePitchsAligned5Ms;
- (id)nonRealTimePitchs;
- (void)stopTask;
- (void)startTask;
- (void)seek:(unsigned long long)arg1;
- (id)pitchs;
- (void)process:(const short *)arg1 bufLen:(unsigned long long)arg2 timestamp:(float)arg3;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 enableNonRealTimeCalculation:(_Bool)arg3;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 frameSize:(unsigned long long)arg3 hopSize:(unsigned long long)arg4 enableNonRealTimeCalculation:(_Bool)arg5;

@end

