//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, NSMutableArray;

@interface MMMusicNoDotSelectItemDisplayViewCustomLayout : UICollectionViewFlowLayout
{
    double _itemSizeLen;
    NSArray *_itemXPosArray;
    NSArray *_finalLayoutAttributes;
    NSMutableArray *_insertIndexPaths;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSArray *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property(retain, nonatomic) NSArray *itemXPosArray; // @synthesize itemXPosArray=_itemXPosArray;
@property(nonatomic) double itemSizeLen; // @synthesize itemSizeLen=_itemSizeLen;
- (void)calcItemLayoutAttributesOriginXWithXPosArray:(id)arg1 layoutAttributes:(id)arg2;
- (void)calcCenterAligmentLayoutWithCurLayoutAttributes:(id)arg1 isDelete:(_Bool)arg2;
- (id)calcCenterLayoutItemXPos:(unsigned long long)arg1;
- (unsigned long long)maxCountInScreen;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

