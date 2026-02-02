//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface MMLiveLotteryErrTipBaseView
{
    CDUnknownBlockType _actionButtonBlock;
    long long _previousOrientation;
    UIView *_contentView;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UIButton *_actionButton;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(copy, nonatomic) CDUnknownBlockType actionButtonBlock; // @synthesize actionButtonBlock=_actionButtonBlock;
- (void)pageSheetDidRotation;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)updateErrTipBaseViewTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

