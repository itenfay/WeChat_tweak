//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderShopShelfLabelClassifyInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveShopShelfClassifyCell : UICollectionViewCell
{
    FinderShopShelfLabelClassifyInfo *_info;
    MMUILabel *_classifyLabel;
    MMWebImageView *_iconView;
}

+ (struct CGSize)cellSizeWithInfo:(id)arg1;
+ (double)spacing;
+ (struct CGSize)iconSize;
+ (id)selectedFont;
+ (id)normalFont;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *classifyLabel; // @synthesize classifyLabel=_classifyLabel;
@property(retain, nonatomic) FinderShopShelfLabelClassifyInfo *info; // @synthesize info=_info;
- (void)updateWithIsChosen:(_Bool)arg1;
- (void)updateWithClassifyInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

