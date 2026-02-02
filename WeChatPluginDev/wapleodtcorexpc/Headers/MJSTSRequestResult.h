//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MJSTSRequestResult
{
    NSData *_pcmData;
    NSString *_audioFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(readonly, nonatomic) NSData *pcmData; // @synthesize pcmData=_pcmData;
- (id)description;
- (id)initWithPCMData:(id)arg1;

@end

