//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSDictionary, NSString;

@interface MJTTSRequestResult
{
    NSData *_responseData;
    NSData *_pcmData;
    NSString *_audioFilePath;
    long long _audioSampleRate;
    NSDictionary *_extraInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraInfos; // @synthesize extraInfos=_extraInfos;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(retain, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(retain, nonatomic) NSData *pcmData; // @synthesize pcmData=_pcmData;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (id)description;
- (id)initWithResponseData:(id)arg1 extraInfos:(id)arg2;
- (id)initWithResponseData:(id)arg1;

@end

