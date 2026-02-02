//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EffectSpec : NSObject
{
    unsigned long long _sampleRate;
    unsigned long long _maximumBlockSize;
    unsigned long long _channels;
    NSString *_irFilesDirPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *irFilesDirPath; // @synthesize irFilesDirPath=_irFilesDirPath;
@property(readonly, nonatomic) unsigned long long channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) unsigned long long maximumBlockSize; // @synthesize maximumBlockSize=_maximumBlockSize;
@property(readonly, nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)InitWithSampleRate:(unsigned long long)arg1 channels:(unsigned long long)arg2 maximumBlockSize:(unsigned long long)arg3 irFilesDirPath:(id)arg4;
- (id)InitWithSampleRate:(unsigned long long)arg1 channels:(unsigned long long)arg2 maximumBlockSize:(unsigned long long)arg3;

@end

