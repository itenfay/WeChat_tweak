//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AQAudioPlayer
{
    _Bool mIsBindMuteSwitch;
    NSString *mCachedTag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mCachedTag; // @synthesize mCachedTag;
- (void)autostop;
- (void)stop;
- (void)replay;
- (void)play;
- (_Bool)preparePlayWithAudioFile:(id)arg1 cachedForTag:(id)arg2;
- (void)updateSession;
- (void)setBindMuteSwitch:(_Bool)arg1;
- (void)prepareBuffers;
- (void)setMagicCookieForPlayBack;
- (void)setDataFormat;
- (void)openAudioFile:(id)arg1;

@end

