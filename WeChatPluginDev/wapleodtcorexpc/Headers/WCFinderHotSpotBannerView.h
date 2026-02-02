//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, NSString, RichTextView, UIImageView, UILabel, WCFinderContact, WCFinderHotBigBubbleView, WCFinderJumpInfo, WCFinderJumpInfoIconView, WCFinderLottieImgBackgroundView;
@protocol WCFinderHotSpotBannerViewDelegate;

@interface WCFinderHotSpotBannerView : UIView
{
    _Bool _isCameraTemplate;
    int _showPosition;
    id <WCFinderHotSpotBannerViewDelegate> _delegate;
    unsigned long long _operatingType;
    WCFinderJumpInfo *_hotSpotJumpInfo;
    NSString *_livingTitle;
    NSString *_livingSubTitle;
    WCFinderContact *_originalContact;
    FinderJumpInfo_Style *_style;
    MMTimer *_timer;
    double _maxTextAreaWidth;
    double _maxWidth;
    WCFinderJumpInfoIconView *_iconView;
    RichTextView *_textView;
    UIImageView *_arrowImageView;
    UILabel *_adLabel;
    UIView *_redDotView;
    RichTextView *_subTitleTextView;
    WCFinderLottieImgBackgroundView *_olympicView;
    WCFinderHotBigBubbleView *_hotBigBubbleView;
}

+ (double)getHotSpotHeight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHotBigBubbleView *hotBigBubbleView; // @synthesize hotBigBubbleView=_hotBigBubbleView;
@property(retain, nonatomic) WCFinderLottieImgBackgroundView *olympicView; // @synthesize olympicView=_olympicView;
@property(retain, nonatomic) RichTextView *subTitleTextView; // @synthesize subTitleTextView=_subTitleTextView;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderJumpInfoIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderContact *originalContact; // @synthesize originalContact=_originalContact;
@property(nonatomic) _Bool isCameraTemplate; // @synthesize isCameraTemplate=_isCameraTemplate;
@property(retain, nonatomic) NSString *livingSubTitle; // @synthesize livingSubTitle=_livingSubTitle;
@property(retain, nonatomic) NSString *livingTitle; // @synthesize livingTitle=_livingTitle;
@property(retain, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo; // @synthesize hotSpotJumpInfo=_hotSpotJumpInfo;
@property(nonatomic) unsigned long long operatingType; // @synthesize operatingType=_operatingType;
@property(nonatomic) __weak id <WCFinderHotSpotBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)videoTid;
- (_Bool)videoPauseState;
- (void)onBigBubbleChangeSuperViewWidth:(double)arg1;
- (void)onChangeSuperViewWidth:(double)arg1;
- (id)jumpInfo;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)notifyToShow;
- (void)onClickClipVideoTemplateAction;
- (void)onClickEnterLivingAction;
- (void)onClickAction;
- (void)setupRedDotView:(_Bool)arg1 layoutArrowView:(double *)arg2;
- (void)_updateVideoTemplateTip;
- (void)_updateLivingTip;
- (_Bool)showArrowRedDot;
- (void)_updateHotSpotWithIconUrl:(id)arg1 iconType:(int)arg2 pagIconUrl:(id)arg3 defaultImage:(id)arg4 tips:(id)arg5 style:(long long)arg6 maxTextWidth:(double)arg7 businessType:(int)arg8;
- (void)_updateOlympicsViewWithTitle:(id)arg1 subTitle:(id)arg2;
- (_Bool)hotJumpInfoDisplayRightStyle;
- (void)addShape:(id)arg1;
- (void)updateLayoutView;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 operatingType:(unsigned long long)arg2;
- (id)initTemplateWithFrame:(struct CGRect)arg1 isCameraTemplate:(_Bool)arg2;
- (id)initWithWithIsLivingStateAndFrameForProductShare:(struct CGRect)arg1;
- (id)initWithWithIsLivingStateAndFrame:(struct CGRect)arg1 title:(id)arg2 subTitle:(id)arg3 maxTextAreaWidth:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 hotSpotJumpInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

