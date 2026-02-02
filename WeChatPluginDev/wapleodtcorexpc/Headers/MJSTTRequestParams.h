//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSpeechAudioData;

@interface MJSTTRequestParams
{
    MJSpeechAudioData *_audioData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJSpeechAudioData *audioData; // @synthesize audioData=_audioData;
- (id)description;
- (id)initWithAudioData:(id)arg1;

@end

