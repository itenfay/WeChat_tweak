//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MusicDefualtImageView, NSString, TingFlowPlayerConfiguration, TingItem, TingLyricsView;
@protocol TingFlowPlayerProtocol;

@interface TingLiteMediaView : UIView
{
    _Bool _disableMinimizeWhenMusicStop;
    _Bool _muted;
    int _playScene;
    TingLyricsView *_lyricView;
    id <TingFlowPlayerProtocol> _player;
    TingFlowPlayerConfiguration *_playerConfiguration;
    NSString *_coverUrlString;
    NSString *_listenId;
    TingItem *_tingItem;
    MusicDefualtImageView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MusicDefualtImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(copy, nonatomic) NSString *listenId; // @synthesize listenId=_listenId;
@property(copy, nonatomic) NSString *coverUrlString; // @synthesize coverUrlString=_coverUrlString;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool disableMinimizeWhenMusicStop; // @synthesize disableMinimizeWhenMusicStop=_disableMinimizeWhenMusicStop;
@property(retain, nonatomic) TingFlowPlayerConfiguration *playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> player; // @synthesize player=_player;
@property(nonatomic) int playScene; // @synthesize playScene=_playScene;
@property(retain, nonatomic) TingLyricsView *lyricView; // @synthesize lyricView=_lyricView;
- (void)onTingItemListenIdAvailable:(id)arg1 item:(id)arg2;
- (void)onTingItemUpdatedWithId:(id)arg1 item:(id)arg2;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)releasePlayer;
- (void)onListenIdAvailable:(id)arg1;
- (void)becomeResidentPlayer;
- (id)movePlayerOut;
- (void)creatPlayerIfNeeded;
- (_Bool)bindOrCreateNewPlayer;
- (_Bool)isCurrentActivePlayerPlayingSameItem;
- (void)setMinimizeWindowShowing:(_Bool)arg1;
- (void)setupPlayer:(id)arg1;
- (void)stopPlay;
- (void)resumePlay;
- (void)pausePlay;
- (void)playAfterBindOrCreate;
- (_Bool)bindExistedPlayerAndPlay;
- (void)startPlay;
- (id)generatePlayerConfiguration;
- (id)displayCoverUrlString;
- (void)layoutSubviews;
- (void)dealloc;
- (void)commentInit;
- (id)initWithTingItem:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)initWithListenId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

