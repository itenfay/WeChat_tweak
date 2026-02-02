//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BizAppReaderMessageBigPicViewModel, CAGradientLayer, MMHeadImageView, RichTextView, UIImageView, UILabel;

@interface BizAppReaderMessageBigPicView : UIView
{
    UIView *_coverImageView;
    CAGradientLayer *_coverGradientLayer;
    MMHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIImageView *_multiPicIconView;
    UILabel *_picCountLabel;
    RichTextView *_titleLabel;
    BizAppReaderMessageBigPicViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BizAppReaderMessageBigPicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *picCountLabel; // @synthesize picCountLabel=_picCountLabel;
@property(retain, nonatomic) UIImageView *multiPicIconView; // @synthesize multiPicIconView=_multiPicIconView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CAGradientLayer *coverGradientLayer; // @synthesize coverGradientLayer=_coverGradientLayer;
@property(retain, nonatomic) UIView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)updateUsername:(id)arg1 nickname:(id)arg2;
- (void)refreshBottomViewLayout:(id)arg1;
- (void)updateLayoutWithBigPicSize:(struct CGSize)arg1 titleSize:(struct CGSize)arg2 viewStyle:(id)arg3;
- (void)cropLongPic:(id)arg1;
- (void)updateCoverImageView:(id)arg1;
- (void)cancelUpdatingCoverImageView;
- (void)updateWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupTitleLabel;
- (void)setupCoverBottomViews;
- (void)setupCoverImageView;
- (void)setupUI;
- (id)init;

@end

