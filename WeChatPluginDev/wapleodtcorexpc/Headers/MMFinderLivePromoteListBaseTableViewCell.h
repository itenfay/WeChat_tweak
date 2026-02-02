//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromoteListBaseViewItem, MMUIButton, MMUILabel, MMWebImageView, UIView;

@interface MMFinderLivePromoteListBaseTableViewCell
{
    _Bool _editHidePushButton;
    CDUnknownBlockType _actionBlock;
    MMFinderLivePromoteListBaseViewItem *_item;
    MMWebImageView *_webImageView;
    MMUILabel *_titleTagLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMUIButton *_actionButton;
    UIView *_lineView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool editHidePushButton; // @synthesize editHidePushButton=_editHidePushButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *titleTagLabel; // @synthesize titleTagLabel=_titleTagLabel;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) MMFinderLivePromoteListBaseViewItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)categoryItem:(id)arg1 onLikeStatusChanged:(_Bool)arg2;
- (void)layoutUI;
- (double)preferWidth;
- (double)preferHeight;
- (void)configEditMenuButtons;
- (_Bool)enableMenuAction;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onActionButtonClicked:(id)arg1;
- (void)updateHidePushButtonState:(_Bool)arg1;
- (void)updateWithViewItem:(id)arg1;

@end

