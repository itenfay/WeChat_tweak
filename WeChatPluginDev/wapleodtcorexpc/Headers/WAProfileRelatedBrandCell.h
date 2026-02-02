//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView, WAHeaderStackDisplayView, WAProfileRelatedViewModel;

@interface WAProfileRelatedBrandCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowView;
    WAProfileRelatedViewModel *_viewModel;
    unsigned long long _showIconCount;
}

+ (double)cellHeight;
+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellTitle;
- (void)updateCellRelatedListWith:(id)arg1;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

