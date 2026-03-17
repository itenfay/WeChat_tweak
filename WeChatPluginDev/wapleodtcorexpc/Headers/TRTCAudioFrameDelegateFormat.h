//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCAudioFrameDelegateFormat : NSObject
{
    int _channels;
    int _samplesPerCall;
    long long _sampleRate;
}

@property(nonatomic) int samplesPerCall; // @synthesize samplesPerCall=_samplesPerCall;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;

@end

