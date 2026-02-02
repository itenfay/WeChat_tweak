//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer;

@interface WAJSContextPlugin_OpenVoice
{
    AVAudioPlayer *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
- (void)stopCallTone;
- (void)playCallTone;
- (void)removeView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)insertView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getOpenVoiceBaseView;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

