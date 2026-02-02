//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, MMMusicShareItem, NSString, UIImage;
@protocol MMMusicPlayerContollerDelegate;

@interface MMMusicPlayerContoller
{
    MMMusicInfo *m_musicInfo;
    UIImage *m_imgForIdle;
    UIImage *m_imgForIdleHL;
    UIImage *m_imgForPlaying;
    UIImage *m_imgForPlayingHL;
    id <MMMusicPlayerContollerDelegate> m_playDelegate;
    NSString *m_key;
    long long m_playerSource;
    long long m_contentType;
    NSString *m_title;
    NSString *m_photoUrl;
    NSString *m_url;
    NSString *m_lowBandUrl;
    NSString *m_webUrl;
    NSString *m_singer;
    MMMusicShareItem *_m_musicShareItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicShareItem *m_musicShareItem; // @synthesize m_musicShareItem=_m_musicShareItem;
@property(nonatomic) __weak id <MMMusicPlayerContollerDelegate> m_playDelegate; // @synthesize m_playDelegate;
@property(retain, nonatomic) NSString *m_singer; // @synthesize m_singer;
@property(retain, nonatomic) NSString *m_webUrl; // @synthesize m_webUrl;
@property(retain, nonatomic) NSString *m_lowBandUrl; // @synthesize m_lowBandUrl;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_photoUrl; // @synthesize m_photoUrl;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) long long m_contentType; // @synthesize m_contentType;
@property(nonatomic) long long m_playerSource; // @synthesize m_playerSource;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) UIImage *m_imgForPlayingHL; // @synthesize m_imgForPlayingHL;
@property(retain, nonatomic) UIImage *m_imgForPlaying; // @synthesize m_imgForPlaying;
@property(retain, nonatomic) UIImage *m_imgForIdleHL; // @synthesize m_imgForIdleHL;
@property(retain, nonatomic) UIImage *m_imgForIdle; // @synthesize m_imgForIdle;
@property(retain, nonatomic) MMMusicInfo *m_musicInfo; // @synthesize m_musicInfo;
- (long long)getPlayerSource;
- (long long)getPlayState;
- (void)setImage:(id)arg1 HLImage:(id)arg2 forPlayerState:(long long)arg3;
- (void)setMusicSinger:(id)arg1;
- (void)setMusicWebUrl:(id)arg1;
- (void)setLowBandUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setMusicPhotoUrl:(id)arg1;
- (void)setMusicTitle:(id)arg1;
- (void)setPlayerType:(long long)arg1;
- (void)setPlayerSource:(long long)arg1;
- (void)setKey:(id)arg1;
- (id)getMusicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)getMusicInfo;
- (void)setMusicInfo:(id)arg1;
- (void)addMusicItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMusicListSource:(long long)arg1;
- (void)playClicked:(_Bool)arg1;
- (void)setAndPlayMusicItem:(id)arg1 clickedOnBtn:(_Bool)arg2;
- (void)onClickOnMe;
- (void)onBtnClicked;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onMusicPlayStatusChanged;
- (void)updateButtonImage;
- (_Bool)isCurrentControllForPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

