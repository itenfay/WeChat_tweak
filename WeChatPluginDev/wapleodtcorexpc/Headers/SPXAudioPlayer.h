//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SPXAudioPlayer
{
}

- (void)autostop;
- (void)stop;
- (void)replay;
- (void)setProgress:(unsigned int)arg1;
- (void)playAtTime:(unsigned int)arg1;
- (_Bool)preparePlayWithFile:(id)arg1 sync:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (void)prepareBuffers;
- (void)setDataFormat;
- (void)openSPXFile:(id)arg1;

@end

