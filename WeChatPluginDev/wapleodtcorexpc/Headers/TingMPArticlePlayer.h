//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMListenTTSInfo, NSString, WCAudioPlayer;

@interface TingMPArticlePlayer
{
    WCAudioPlayer *_player;
    MMListenTTSInfo *_ttsInfo;
    long long _remainedErrorRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long remainedErrorRetryCount; // @synthesize remainedErrorRetryCount=_remainedErrorRetryCount;
@property(retain, nonatomic) MMListenTTSInfo *ttsInfo; // @synthesize ttsInfo=_ttsInfo;
@property(retain, nonatomic) WCAudioPlayer *player; // @synthesize player=_player;
- (double)duration;
- (void)setPlayRate:(float)arg1;
- (_Bool)isPlayRateSupported;
- (id)audioInfo;
- (_Bool)isHLS;
- (_Bool)canRetry;
- (void)prepareToPlay;
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

