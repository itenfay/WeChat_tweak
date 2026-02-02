//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface V2TXLiveAudioFrame : NSObject
{
    int _sampleRate;
    int _channel;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;

@end

