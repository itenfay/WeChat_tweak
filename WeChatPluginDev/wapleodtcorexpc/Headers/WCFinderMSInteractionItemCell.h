//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface WCFinderMSInteractionItemCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    struct CGSize _layoutSize;
}

+ (double)heightWithInteractionItem:(id)arg1 width:(double)arg2;
+ (double)titleWidthWithInteractionItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
- (void)updateWithInteractionItem:(id)arg1;
- (void)_layoutUI;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

