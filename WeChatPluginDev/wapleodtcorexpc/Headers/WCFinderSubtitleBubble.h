//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, MMUIButton, MMWebImageView, NSString, UILabel, WCFinderJumpInfo;
@protocol WCFinderSubtitleBubbleDelegate;

@interface WCFinderSubtitleBubble : UIView
{
    int _showPosition;
    id <WCFinderSubtitleBubbleDelegate> _delegate;
    unsigned long long _bubbleStyle;
    FinderJumpInfo_Style *_style;
    MMTimer *_timer;
    double _maxTextAreaWidth;
    double _maxWidth;
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel_1;
    UILabel *_subtitleLabel_2;
    MMUIButton *_episodeBtn;
    unsigned long long _operatingType;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long operatingType; // @synthesize operatingType=_operatingType;
@property(retain, nonatomic) MMUIButton *episodeBtn; // @synthesize episodeBtn=_episodeBtn;
@property(retain, nonatomic) UILabel *subtitleLabel_2; // @synthesize subtitleLabel_2=_subtitleLabel_2;
@property(retain, nonatomic) UILabel *subtitleLabel_1; // @synthesize subtitleLabel_1=_subtitleLabel_1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(nonatomic) unsigned long long bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
@property(nonatomic) __weak id <WCFinderSubtitleBubbleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)collectionEpisodeBtnClicked;
- (void)onClickAction;
- (void)notifyToShow;
- (void)updateLayoutView;
- (void)updateEpisodeBtnAlpha;
- (void)updateStyleAnimated:(_Bool)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)dealloc;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

