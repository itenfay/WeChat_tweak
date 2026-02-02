//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIButton, UIImageView, UILabel, UIView;

@interface MMActionSheetGeneralRowView
{
    UIButton *_backgroundButton;
    MMWebImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_titleLabelContainer;
    CDUnknownBlockType _tapHandler;
}

+ (double)rowViewHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) UIView *titleLabelContainer; // @synthesize titleLabelContainer=_titleLabelContainer;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
- (void)onTapped;
- (void)layoutSubviews;
- (void)setupAllSubviewsWithTitle:(id)arg1 subTitle:(id)arg2 iconUrl:(id)arg3 iconImage:(id)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 iconUrl:(id)arg3 iconImage:(id)arg4 tapHandler:(CDUnknownBlockType)arg5;

@end

