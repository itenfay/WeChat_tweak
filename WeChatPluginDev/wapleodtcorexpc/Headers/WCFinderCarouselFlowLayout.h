//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCFinderCarouselFlowLayout : UICollectionViewFlowLayout
{
    unsigned long long _style;
    double _itemSpace;
    double _itemWidth;
    double _minScale;
    double _defaultItemWidth;
}

@property(nonatomic) double defaultItemWidth; // @synthesize defaultItemWidth=_defaultItemWidth;
@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)initial;
- (id)initWithStyle:(unsigned long long)arg1;

@end

