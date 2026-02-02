//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface TRTCAudioFrame : NSObject
{
    int _channels;
    NSData *_data;
    long long _sampleRate;
    unsigned long long _timestamp;
    NSData *_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)init;

@end

