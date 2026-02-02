//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMUIView, MMWebImageView, NSString;

@interface MJShootFilterItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    MMUIView *_iconContainerView;
    MMWebImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUIView *_borderView;
    MMUIView *_blurView;
    MMUIView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (id)mj_loadingContainerView;
- (void)configCellWithItem:(id)arg1;
- (void)setupViews;
- (void)commonInit;
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

