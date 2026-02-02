//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSValue;

@interface WCFinderStreamLayout : UICollectionViewLayout
{
    _Bool _sectionHeadersPinToVisibleBounds;
    _Bool _sectionFootersPinToVisibleBounds;
    unsigned long long _columnCount;
    double _cellHeight;
    long long _crossPinHeaderIndex;
    NSValue *_contentInsetValue;
    NSMutableDictionary *_caches;
    struct CGSize _cellSpace;
    struct CGSize _minSize;
    struct UIEdgeInsets _cellEdgeInsets;
    struct UIEdgeInsets _headerEdgeInsets;
    struct UIEdgeInsets _footerEdgeInsets;
    struct UIEdgeInsets _decorationEdgeInsets;
}

+ (Class)invalidationContextClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(retain, nonatomic) NSValue *contentInsetValue; // @synthesize contentInsetValue=_contentInsetValue;
@property(nonatomic) long long crossPinHeaderIndex; // @synthesize crossPinHeaderIndex=_crossPinHeaderIndex;
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds; // @synthesize sectionFootersPinToVisibleBounds=_sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds; // @synthesize sectionHeadersPinToVisibleBounds=_sectionHeadersPinToVisibleBounds;
@property(nonatomic) struct UIEdgeInsets decorationEdgeInsets; // @synthesize decorationEdgeInsets=_decorationEdgeInsets;
@property(nonatomic) struct UIEdgeInsets footerEdgeInsets; // @synthesize footerEdgeInsets=_footerEdgeInsets;
@property(nonatomic) struct UIEdgeInsets headerEdgeInsets; // @synthesize headerEdgeInsets=_headerEdgeInsets;
@property(nonatomic) struct UIEdgeInsets cellEdgeInsets; // @synthesize cellEdgeInsets=_cellEdgeInsets;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) struct CGSize cellSpace; // @synthesize cellSpace=_cellSpace;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (unsigned long long)topVisibleSectionInBounds:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)copyAttributes:(id)arg1 withDeltaTop:(double)arg2;
- (void)prepareDecorationLayoutForSection:(unsigned long long)arg1;
- (void)prepareFooterLayoutForSection:(unsigned long long)arg1;
- (void)prepareCellLayoutForSection:(unsigned long long)arg1;
- (long long)cellCountForSection:(unsigned long long)arg1;
- (void)prepareHeaderLayoutForSection:(unsigned long long)arg1;
- (void)prepareLayoutForSection:(unsigned long long)arg1;
- (void)prepareLayout;
- (_Bool)footerPinToVisibleBoundsInSection:(unsigned long long)arg1;
- (_Bool)headerPinToVisibleBoundsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (double)contentHeightToSection:(double)arg1;
- (id)delegate;
- (id)init;

@end

