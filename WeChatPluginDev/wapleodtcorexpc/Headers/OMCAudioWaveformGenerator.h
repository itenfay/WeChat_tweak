//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCAudioWaveformGenerator : NSObject
{
    struct SharedPtr<XMFAudioWaveformGenF32> _backingGen;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)outputSamples;
- (void)reset;
- (void)updateWithPCMData:(const float *)arg1 length:(unsigned long long)arg2;
- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)arg1 bufferScale:(unsigned long long)arg2;
- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)arg1;

@end

