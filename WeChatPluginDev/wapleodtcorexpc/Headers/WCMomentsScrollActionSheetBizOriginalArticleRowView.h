//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIImageView, UILabel;
@protocol WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate;

@interface WCMomentsScrollActionSheetBizOriginalArticleRowView
{
    id <WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate> _delegate;
    MMUIButton *_backgroundButton;
    UIImageView *_subscriptionsImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
}

+ (double)rowViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *subscriptionsImageView; // @synthesize subscriptionsImageView=_subscriptionsImageView;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTappedRowInfo;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

