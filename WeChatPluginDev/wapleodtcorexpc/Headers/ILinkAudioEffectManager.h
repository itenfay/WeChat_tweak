//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ILinkAudioEffectManager
{
}

- (void)setAllMusicVolume:(long long)arg1;
- (void)stopAllMusic;
- (void)resumePlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)stopPlayMusic:(int)arg1;
- (void)startPlayMusic:(id)arg1 onStart:(CDUnknownBlockType)arg2 onProgress:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4;
- (id)initWithMode;

@end

