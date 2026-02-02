//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MJTransitionItem, MMUIActivityIndicatorView, MMWebImageView, UILabel;

@interface MJTransitionInspectorCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    UILabel *_titleLabel;
    MJTransitionItem *_item;
    MMWebImageView *_iconImageView;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
@property(readonly, nonatomic) MJTransitionItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)syncWithStatus;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

