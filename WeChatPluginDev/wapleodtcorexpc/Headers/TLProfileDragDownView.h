//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CContact, MMUIButton, RichTextView, TLProfileLikeButton, TLProfileModel, UILabel;
@protocol TLProfileDragDownViewDelegate;

@interface TLProfileDragDownView : UIView
{
    id <TLProfileDragDownViewDelegate> _delegate;
    CContact *_contact;
    TLProfileModel *_tlProfile;
    UIView *_containerView;
    MMUIButton *_headButton;
    UIView *_headImageView;
    UILabel *_titleLabel;
    MMUIButton *_detailButton;
    MMUIButton *_toolButton;
    MMUIButton *_toolButtonIcon;
    UILabel *_toolButtonLabel;
    TLProfileLikeButton *_likeButton;
    RichTextView *_descTextView;
    UIView *_moreContainerView;
    MMUIButton *_moreButton;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *moreContainerView; // @synthesize moreContainerView=_moreContainerView;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) TLProfileLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *toolButtonLabel; // @synthesize toolButtonLabel=_toolButtonLabel;
@property(retain, nonatomic) MMUIButton *toolButtonIcon; // @synthesize toolButtonIcon=_toolButtonIcon;
@property(retain, nonatomic) MMUIButton *toolButton; // @synthesize toolButton=_toolButton;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUIButton *headButton; // @synthesize headButton=_headButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TLProfileModel *tlProfile; // @synthesize tlProfile=_tlProfile;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <TLProfileDragDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapChangeCover;
- (void)onTapHeadButton;
- (void)onTapDetailButton;
- (void)onTapMoreButton;
- (void)layoutSubviewsInMoreContainerView;
- (void)layoutSubviewsInContainerView;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1 profileModel:(id)arg2;
- (void)initGradientLayer;
- (void)initMoreContainerView;
- (void)initContainerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

