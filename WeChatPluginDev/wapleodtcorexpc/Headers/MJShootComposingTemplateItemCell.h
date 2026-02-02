//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel;

@interface MJShootComposingTemplateItemCell : UICollectionViewCell
{
    _Bool _isCellSelected;
    UILabel *_versionLabel;
    MMWebImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (void)configCellWithItem:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

