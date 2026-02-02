//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WCFinderJumpInfo;
@protocol WCFinderSimpleFeedbackViewDelegate;

@interface WCFinderSimpleFeedbackView : UIView
{
    id <WCFinderSimpleFeedbackViewDelegate> _delegate;
    WCFinderJumpInfo *_descriptionJumpInfo;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_tipsLabel;
    UIButton *_likeButton;
    UIButton *_dislikeButton;
    UIView *_separateLine;
    UIButton *_complainButton;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIButton *complainButton; // @synthesize complainButton=_complainButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderJumpInfo *descriptionJumpInfo; // @synthesize descriptionJumpInfo=_descriptionJumpInfo;
@property(nonatomic) __weak id <WCFinderSimpleFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickDescrptionJumpInfo;
- (void)onClickComplainButton:(id)arg1;
- (void)onClickDislikeButton:(id)arg1;
- (void)onClickLikeButton:(id)arg1;
- (id)genActionButtonWithTitle:(id)arg1 imageName:(id)arg2;
- (void)updateFlexLayout;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMaxWidth:(double)arg1;

@end

