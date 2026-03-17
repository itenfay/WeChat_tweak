//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCAdSliderCardFlowLayout : UICollectionViewFlowLayout
{
    _Bool _hasFooter;
    _Bool _isInitialized;
    long long _align;
    double _cardWidth;
    double _cardHeight;
    double _minScale;
    struct CGSize _topItemSize;
    struct CGSize _collectionViewContentSize;
}

@property(nonatomic) struct CGSize collectionViewContentSize; // @synthesize collectionViewContentSize=_collectionViewContentSize;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) _Bool hasFooter; // @synthesize hasFooter=_hasFooter;
@property(nonatomic) double cardHeight; // @synthesize cardHeight=_cardHeight;
@property(nonatomic) double cardWidth; // @synthesize cardWidth=_cardWidth;
@property(nonatomic) struct CGSize topItemSize; // @synthesize topItemSize=_topItemSize;
@property(nonatomic) long long align; // @synthesize align=_align;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutFooterAttributesWithLastCardAttributes:(id)arg1;
- (id)layoutBottomAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (double)parallaxProgressForVisibleIndex:(long long)arg1 offsetProgress:(double)arg2 minScale:(double)arg3;
- (id)layoutCenterAttributesForIndexPath:(id)arg1 currentPage:(long long)arg2 pageOffset:(double)arg3 pageOffsetProgress:(double)arg4;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithAlign:(long long)arg1 cardWidth:(double)arg2 cardHeight:(double)arg3 hasFooter:(_Bool)arg4;

@end

