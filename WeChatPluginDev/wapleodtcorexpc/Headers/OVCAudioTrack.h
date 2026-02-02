//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCAudioTrack : NSObject
{
    SharedPtr_dc2152c3 _backingAudioTrack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_dc2152c3 backingAudioTrack; // @synthesize backingAudioTrack=_backingAudioTrack;
@property(readonly, nonatomic) long long averageBitrate;
@property(readonly, nonatomic) long long sampleUnitsPerFrame;
@property(readonly, nonatomic) long long channelCount;
@property(readonly, nonatomic) NSString *channelLayoutName;
@property(readonly, nonatomic) NSString *sampleFormatName;
@property(readonly, nonatomic) float sampleRate;
@property(readonly, nonatomic) NSString *codecProfileName;
@property(readonly, nonatomic) NSString *codecIDName;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingAudioTrack:(const void *)arg1;

@end

