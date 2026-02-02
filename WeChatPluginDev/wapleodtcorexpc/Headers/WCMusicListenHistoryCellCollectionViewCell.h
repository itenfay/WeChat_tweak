//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIView;

@interface WCMusicListenHistoryCellCollectionViewCell : UICollectionViewCell
{
    double _labelSpacing;
    MMUILabel *_titleLabel;
    MMUILabel *_singerLabel;
    UIView *_selectedMaskView;
    double _cellMinHeight;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _collectionViewContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double cellMinHeight; // @synthesize cellMinHeight=_cellMinHeight;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) MMUILabel *singerLabel; // @synthesize singerLabel=_singerLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets collectionViewContentInsets; // @synthesize collectionViewContentInsets=_collectionViewContentInsets;
@property(nonatomic) double labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)calculateSizeWithConstrainedSize:(struct CGSize)arg1;
- (void)updateWithTitle:(id)arg1 singer:(id)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

