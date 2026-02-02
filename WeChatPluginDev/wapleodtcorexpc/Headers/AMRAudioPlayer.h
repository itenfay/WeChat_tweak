//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AMRAudioPlayer
{
}

- (void)autostop;
- (void)stop;
- (void)replay;
- (void)setProgress:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (void)play;
- (_Bool)preparePlayWithFile:(id)arg1 sync:(_Bool)arg2;
- (void)clearVoiceHeadWithFile:(id)arg1;
- (_Bool)preparePlayNotNotify;
- (void)prepareBuffers;
- (void)setDataFormat;
- (void)openAMRFile:(id)arg1;

@end

