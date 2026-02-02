//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicAutoscrollLabelView, NSString, WCListenLyricsLoadingHeaderView;
@protocol MMMusicLiveLyricDisplayViewDelegate;

@interface MMMusicLiveLyricDisplayView : UIView
{
    _Bool _disabled;
    _Bool _transitionAnimationDisabled;
    _Bool _isAnimating;
    _Bool _isOpenShadow;
    long long _textAlignment;
    id <MMMusicLiveLyricDisplayViewDelegate> _delegate;
    unsigned long long _scene;
    WCListenLyricsLoadingHeaderView *_lyricLoadingView;
    MMMusicAutoscrollLabelView *_currentLabel;
    MMMusicAutoscrollLabelView *_nextLabel;
    NSString *_nextWaitingLyric;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nextWaitingLyric; // @synthesize nextWaitingLyric=_nextWaitingLyric;
@property(retain, nonatomic) MMMusicAutoscrollLabelView *nextLabel; // @synthesize nextLabel=_nextLabel;
@property(retain, nonatomic) MMMusicAutoscrollLabelView *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) WCListenLyricsLoadingHeaderView *lyricLoadingView; // @synthesize lyricLoadingView=_lyricLoadingView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isOpenShadow; // @synthesize isOpenShadow=_isOpenShadow;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) __weak id <MMMusicLiveLyricDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool transitionAnimationDisabled; // @synthesize transitionAnimationDisabled=_transitionAnimationDisabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) NSString *currentLyric; // @dynamic currentLyric;
- (void)tryDisplayNextLyric;
- (void)scrollToNextLyric:(id)arg1;
- (void)updateLyricsPosition;
- (void)internalSizeToFit:(_Bool)arg1;
- (void)sizeToFit;
- (void)setLyricNumberOfLines:(int)arg1;
- (void)setLyricColor:(id)arg1;
- (void)setLyricFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupLyricLoadingView;
- (void)setupSubviews;
- (id)initWithScene:(unsigned long long)arg1;

@end

