//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCFinderBGMPlayer;

@interface WCFinderMinimizePhotoContentView
{
    _Bool _needResetSeek;
    WCFinderBGMPlayer *_bgPlayer;
    UIView *_contentImageView;
    CDUnknownBlockType _playerGenerator;
    long long _currentIdx;
    UIView *_currentView;
    struct CGSize _originSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needResetSeek; // @synthesize needResetSeek=_needResetSeek;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) long long currentIdx; // @synthesize currentIdx=_currentIdx;
@property(copy, nonatomic) CDUnknownBlockType playerGenerator; // @synthesize playerGenerator=_playerGenerator;
@property(retain, nonatomic) UIView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(retain, nonatomic) WCFinderBGMPlayer *bgPlayer; // @synthesize bgPlayer=_bgPlayer;
- (void)onBGMPlayerDidPause:(id)arg1;
- (void)onBGMPlayerDidPlay:(id)arg1;
- (void)onBGMPlayerPlayToEnd:(id)arg1;
- (_Bool)beTakeOverAudioModel;
- (id)animatingSnapView;
- (void)resumePlay;
- (void)pausePlay;
- (void)setFrame:(struct CGRect)arg1;
- (void)cleanUp;
- (void)dealloc;
- (void)didMoveToWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

