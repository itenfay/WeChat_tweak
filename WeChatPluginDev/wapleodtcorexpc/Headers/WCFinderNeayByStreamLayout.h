//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WCFinderNeayByStreamLayoutDelegate;

@interface WCFinderNeayByStreamLayout : UICollectionViewLayout
{
    id <WCFinderNeayByStreamLayoutDelegate> _delegate;
    NSMutableArray *_attrsArr;
    NSMutableArray *_columnHeights;
    double _maxContentHeight;
    NSMutableArray *_shouldAnimationArr;
    NSMutableDictionary *_headerAttrsArr;
    NSMutableDictionary *_footerAttrArr;
    NSMutableDictionary *_cellAttrArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cellAttrArr; // @synthesize cellAttrArr=_cellAttrArr;
@property(retain, nonatomic) NSMutableDictionary *footerAttrArr; // @synthesize footerAttrArr=_footerAttrArr;
@property(retain, nonatomic) NSMutableDictionary *headerAttrsArr; // @synthesize headerAttrsArr=_headerAttrsArr;
@property(retain, nonatomic) NSMutableArray *shouldAnimationArr; // @synthesize shouldAnimationArr=_shouldAnimationArr;
@property(nonatomic) double maxContentHeight; // @synthesize maxContentHeight=_maxContentHeight;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableArray *attrsArr; // @synthesize attrsArr=_attrsArr;
@property(nonatomic) __weak id <WCFinderNeayByStreamLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cellAttributeAtIndexPath:(id)arg1;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (double)maxYWithColumnHeights;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)setupDecorationViewatIndexPath:(id)arg1 top:(double)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setupSectionFooter:(unsigned long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setupSectionHeader:(unsigned long long)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)clearData;
- (void)prepareLayout;

@end

