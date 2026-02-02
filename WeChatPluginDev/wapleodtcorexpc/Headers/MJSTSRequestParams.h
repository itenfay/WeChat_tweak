//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSpeechAudioData, NSString;

@interface MJSTSRequestParams
{
    MJSpeechAudioData *_audioData;
    NSString *_roleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(readonly, nonatomic) MJSpeechAudioData *audioData; // @synthesize audioData=_audioData;
- (id)description;
- (id)initWithAudioData:(id)arg1 roleID:(id)arg2;

@end

