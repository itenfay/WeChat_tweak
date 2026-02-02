//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, UIImageView, UILabel, UIView, WCFinderFeedBubbleButton;

@interface WCFinderFeedBubbleView
{
    UIView *_textViewBox;
    NSObject *_model;
    double _textAreaMaxWidth;
    double _maxWidth;
    CDUnknownBlockType _clickButtonBlock;
    unsigned long long _ationButtonShowType;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    WCFinderFeedBubbleButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedBubbleButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long ationButtonShowType; // @synthesize ationButtonShowType=_ationButtonShowType;
@property(copy, nonatomic) CDUnknownBlockType clickButtonBlock; // @synthesize clickButtonBlock=_clickButtonBlock;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double textAreaMaxWidth; // @synthesize textAreaMaxWidth=_textAreaMaxWidth;
@property(retain, nonatomic) NSObject *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *textViewBox; // @synthesize textViewBox=_textViewBox;
- (void)onClickActionButton;
- (id)getContainerView;
- (id)getActionButtonBackgroundColor;
- (void)setButtonEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)doLayout;
- (void)setButtonTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ationButtonShowType:(unsigned long long)arg4;
- (void)setButtonTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)setBubbleTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void *)defineLabelsFlex:(void *)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

