//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;
@protocol MMActionSheetImgSourceRowViewDelegate;

@interface MMActionSheetImgSourceRowView
{
    id <MMActionSheetImgSourceRowViewDelegate> _delegate;
    UIButton *_backgroundButton;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
}

+ (double)rowViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <MMActionSheetImgSourceRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTappedRowImgSource;
- (void)layoutSubviews;
- (void)setupAllSubviews;
- (id)init;

@end

