//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJSegmentFilterInspectorViewModel, MMUILabel, MMUIView, MMWebImageView, NSString, UIImageView;

@interface MJComposingClipFilterItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    MMUILabel *_titleLabel;
    MMWebImageView *_iconImageView;
    MMUIView *_loadingView;
    UIImageView *_disableImageView;
    MJSegmentFilterInspectorViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJSegmentFilterInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *disableImageView; // @synthesize disableImageView=_disableImageView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
@property(retain, nonatomic) MMUIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)mj_loadingContainerView;
- (void)configCellWithFilter:(id)arg1;
- (void)commonInit;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

