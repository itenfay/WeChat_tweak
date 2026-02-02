//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFadeOutView, MMMusicInfo, MMMusicLyricVcCalculator, MMUIButton, NSString, UITableView, UITapGestureRecognizer;
@protocol MMMusicLyricsPanelDelegate;

@interface MMMusicLyricsPanel : UIView
{
    MMMusicInfo *m_musicInfo;
    UITableView *_lyricsView;
    unsigned int _currentLyricIndex;
    unsigned int _lastLyricIndex;
    MMMusicLyricVcCalculator *m_lyricCalcuator;
    MMMusicFadeOutView *m_lyricBgView;
    UIView *m_bottomView;
    MMUIButton *m_upBtn;
    struct CGRect lyricsViewFrame;
    _Bool isFirstLocation;
    unsigned int _fixedLine;
    _Bool _isAnimating;
    unsigned long long mode;
    id <MMMusicLyricsPanelDelegate> _delegate;
    double _lyricsViewCenterY;
    double _lyricsViewHeight;
    double _upBtnTop;
    double _animLimitLyricsViewMinHeight;
    double _animLimitLyricsViewMaxHeight;
    double _animLimitUpBtnMinTop;
    double _animLimitUpBtnMaxTop;
    UITapGestureRecognizer *_exitTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *exitTapGestureRecognizer; // @synthesize exitTapGestureRecognizer=_exitTapGestureRecognizer;
@property(nonatomic) double animLimitUpBtnMaxTop; // @synthesize animLimitUpBtnMaxTop=_animLimitUpBtnMaxTop;
@property(nonatomic) double animLimitUpBtnMinTop; // @synthesize animLimitUpBtnMinTop=_animLimitUpBtnMinTop;
@property(nonatomic) double animLimitLyricsViewMaxHeight; // @synthesize animLimitLyricsViewMaxHeight=_animLimitLyricsViewMaxHeight;
@property(nonatomic) double animLimitLyricsViewMinHeight; // @synthesize animLimitLyricsViewMinHeight=_animLimitLyricsViewMinHeight;
@property(nonatomic) double upBtnTop; // @synthesize upBtnTop=_upBtnTop;
@property(nonatomic) double lyricsViewHeight; // @synthesize lyricsViewHeight=_lyricsViewHeight;
@property(nonatomic) double lyricsViewCenterY; // @synthesize lyricsViewCenterY=_lyricsViewCenterY;
@property(nonatomic) __weak id <MMMusicLyricsPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)runCloseStep2Animation;
- (void)runCloseAnimation;
- (void)reset;
- (_Bool)isOverMinLimit;
- (void)resetValue;
- (double)calculateNewMovement:(double)arg1;
- (void)updateValueWithMovement:(double)arg1;
- (void)markPreviousValue;
- (void)tapGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tryToLocateProperLyricInBottomArea;
- (void)tryToLocateProperLyricInTopArea;
- (void)tryToLocateFirstProperLyricInRightPos;
- (void)updateUIWithCurrIndex:(unsigned int)arg1;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (_Bool)shouldPlayLyricAnimation;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)textFontForSection:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)close;
- (void)onClickUpBtn;
- (void)setAnimatingState:(_Bool)arg1;
- (void)setFixedLine:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)addBottomViewPanGesture:(id)arg1;
- (void)updateLyrics:(id)arg1;
- (void)initUpBtn;
- (void)initLyricsListView;
- (void)initView;
- (void)dealloc;
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

