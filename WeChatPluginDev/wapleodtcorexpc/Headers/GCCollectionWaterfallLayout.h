//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol GCCollectionWaterfallLayoutProtocol;

@interface GCCollectionWaterfallLayout : UICollectionViewFlowLayout
{
    id <GCCollectionWaterfallLayoutProtocol> _delegate;
    unsigned long long _columns;
    double _columnSpacing;
    double _itemSpacing;
    NSMutableArray *_attributesArray;
    NSMutableDictionary *_attributesCacheDic;
    NSMutableDictionary *_supplementaryAttributesCacheDic;
    NSMutableArray *_columnHeights;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableDictionary *supplementaryAttributesCacheDic; // @synthesize supplementaryAttributesCacheDic=_supplementaryAttributesCacheDic;
@property(retain, nonatomic) NSMutableDictionary *attributesCacheDic; // @synthesize attributesCacheDic=_attributesCacheDic;
@property(retain, nonatomic) NSMutableArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(nonatomic) __weak id <GCCollectionWaterfallLayoutProtocol> delegate; // @synthesize delegate=_delegate;
- (long long)columnOfMostHeight;
- (long long)columnOfLessHeight;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

