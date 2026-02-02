//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIImageView, UILabel;

@interface MJCanvasCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    MMUIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

