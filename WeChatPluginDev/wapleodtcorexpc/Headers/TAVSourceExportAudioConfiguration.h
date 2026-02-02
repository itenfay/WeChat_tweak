//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TAVSourceExportAudioConfiguration : NSObject
{
    NSDictionary *_inputSettings;
    unsigned long long _sampleRate;
    unsigned long long _encoderBitRate;
    unsigned long long _channelCount;
    NSDictionary *_audioOutputSetting;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *audioOutputSetting; // @synthesize audioOutputSetting=_audioOutputSetting;
@property(nonatomic) unsigned long long channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) unsigned long long encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSDictionary *inputSettings; // @synthesize inputSettings=_inputSettings;
- (id)makeOutputSetting;
- (id)init;

@end

