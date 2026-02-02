//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTBaseItemCellViewModel;
@protocol BTBaseItemCellViewDelegate;

@interface BTBaseItemCellView
{
    BTBaseItemCellViewModel *_viewModel;
    id <BTBaseItemCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BTBaseItemCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BTBaseItemCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCellOnPageAppear;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)forceSetHighlighted:(_Bool)arg1;
- (id)getCoverImageView;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithViewModel:(id)arg1;

@end

