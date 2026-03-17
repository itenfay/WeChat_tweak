//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSpeechAudioData;

@interface MJSTTRequestParams : NSObject
{
    MJSpeechAudioData *_audioData;
}

@property(readonly, nonatomic) MJSpeechAudioData *audioData; // @synthesize audioData=_audioData;
- (id)description;
- (id)initWithAudioData:(id)arg1;

@end

