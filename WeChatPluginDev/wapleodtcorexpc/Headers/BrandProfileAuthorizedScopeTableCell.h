//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileAuthorizedScopeTableCellViewModel, MMUILabel, MMWebImageView, UIButton, UIView;
@protocol BrandProfileAuthorizedScopeTableCellDelegate;

@interface BrandProfileAuthorizedScopeTableCell
{
    id <BrandProfileAuthorizedScopeTableCellDelegate> _delegate;
    MMWebImageView *_appIconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIView *_topSeperatorLine;
    UIButton *_deleteButton;
    BrandProfileAuthorizedScopeTableCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileAuthorizedScopeTableCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(nonatomic) __weak id <BrandProfileAuthorizedScopeTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)contextMenuEnabled;
- (void)onDeleteButtonClicked;
- (id)wordingForState:(unsigned int)arg1;
- (void)applyViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupMenuItems;
- (void)setupSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

