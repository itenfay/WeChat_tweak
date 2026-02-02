//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAOpenALAudioDecodeInfo : NSObject
{
    int _format;
    int _size;
    int _sampleRate;
    float _duration;
    void *_audioData;
}

@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) void *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int format; // @synthesize format=_format;
- (id)description;
- (void)dealloc;
- (_Bool)isVaild;

@end

