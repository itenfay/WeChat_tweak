//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMUIButton, MMUILabel, MMWebImageView, UIButton, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveForbidJoinLiveFullScreenView : UIView
{
    CDUnknownBlockType _closeCallback;
    UIView *_backgroundView;
    MMUIButton *_closeButton;
    UIButton *_confirmButton;
    MMFinderLiveTask *_liveTask;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (_Bool)needAnchorInfo;
@property(readonly, nonatomic) WCFinderContact *anchorContact;
- (id)tipsLabelText;
- (id)tipsLabelFont;
- (void)onCloseButtonClicked;
- (void)updateConfirmButtonTitleAndImage;
- (void)onConfirmButtonClicked;
- (void)layoutTipsLabel;
- (void)layoutAnchorNameLabelAndAuthIconView;
- (void)layoutAnchorHeadImageView;
- (void)layoutCloseButton;
- (void)layoutBackgroundView;
- (void)layoutConfirmButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)notifyDisappear;
- (void)notifyAppear;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveTask:(id)arg2;

@end

