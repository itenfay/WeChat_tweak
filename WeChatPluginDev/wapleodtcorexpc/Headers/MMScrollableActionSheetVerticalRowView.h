//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetVerticalRowInfo, MMWebImageView, UIButton, UIImageView, UILabel;
@protocol MMScrollableActionSheetVerticalRowViewDelegate;

@interface MMScrollableActionSheetVerticalRowView
{
    MMScrollableActionSheetVerticalRowInfo *_rowInfo;
    id <MMScrollableActionSheetVerticalRowViewDelegate> _delegate;
    UIButton *_backgroundButton;
    UIImageView *_loadingView;
    MMWebImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <MMScrollableActionSheetVerticalRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMScrollableActionSheetVerticalRowInfo *rowInfo; // @synthesize rowInfo=_rowInfo;
- (void)onTappedRowInfo;
- (void)layoutSubviews;
- (void)setupGestureRecognizer;
- (void)setupAllSubviews;
- (id)initWithDelegate:(id)arg1;

@end

