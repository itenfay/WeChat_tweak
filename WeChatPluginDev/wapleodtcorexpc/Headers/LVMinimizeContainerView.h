//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LVMinimizeHintView, MMLoadingIndicatorView, MMUIButton, UIButton;
@protocol LVMinimizeContainerViewDelegate;

@interface LVMinimizeContainerView : UIView
{
    _Bool _isLoading;
    id <LVMinimizeContainerViewDelegate> _delegate;
    unsigned long long _style;
    UIButton *_contentView;
    LVMinimizeHintView *_hintView;
    MMUIButton *_playPauseButton;
    MMUIButton *_closeButton;
    UIView *_playerView;
    MMLoadingIndicatorView *_loadingView;
    struct WCShowArea _playerShowArea;
}

+ (struct CGSize)sizeForMediaInfo:(id)arg1;
+ (struct CGSize)sizeForStyle:(unsigned long long)arg1;
+ (unsigned long long)styleForMediaInfo:(id)arg1;
+ (_Bool)shouldAdjustShowArea:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) LVMinimizeHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UIButton *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct WCShowArea playerShowArea; // @synthesize playerShowArea=_playerShowArea;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <LVMinimizeContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPlaying;
- (id)detachPlayerView;
- (void)attachPlayerView:(id)arg1;
- (void)contentClicked:(id)arg1;
- (void)closeClicked:(id)arg1;
- (void)playPauseClicked:(id)arg1;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)_createButton:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isShowingNextHint;
- (void)updateHintType:(unsigned long long)arg1;
- (unsigned long long)currentHintType;
- (void)resizeWithMediaInfo:(id)arg1;
- (void)updateShowAreaForMediaInfo:(id)arg1;

@end

