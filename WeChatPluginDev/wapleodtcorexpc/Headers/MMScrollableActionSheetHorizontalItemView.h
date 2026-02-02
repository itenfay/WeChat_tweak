//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetHorizontalItemInfo, UIButton, UIImageView, UILabel;
@protocol MMScrollableActionSheetHorizontalItemViewDelegate;

@interface MMScrollableActionSheetHorizontalItemView
{
    MMScrollableActionSheetHorizontalItemInfo *_itemInfo;
    UIButton *_iconButton;
    UILabel *_titleLabel;
    UIImageView *_cornerImageView;
    double _cachedItemViewHeight;
    id <MMScrollableActionSheetHorizontalItemViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMScrollableActionSheetHorizontalItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cachedItemViewHeight; // @synthesize cachedItemViewHeight=_cachedItemViewHeight;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) MMScrollableActionSheetHorizontalItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void)onTappedItemInfo;
- (double)layoutIconButtonAndTitleLabel;
- (void)layoutSubviews;
- (double)calcuateItemViewHeight;
- (void)setNeedRecalcuateItemViewHeight;
- (void)setupGestureRecognizer;
- (void)setupTitleLabel;
- (void)setupIconButton;
- (id)initWithDelegate:(id)arg1;

@end

