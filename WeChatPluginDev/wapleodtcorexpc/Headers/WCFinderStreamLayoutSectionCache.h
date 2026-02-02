//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UICollectionViewLayoutAttributes;

@interface WCFinderStreamLayoutSectionCache : NSObject
{
    double _headerHeight;
    double _cellsHeight;
    double _footerHeight;
    UICollectionViewLayoutAttributes *_headerAttr;
    NSMutableDictionary *_cellsAttr;
    UICollectionViewLayoutAttributes *_footerAttr;
    UICollectionViewLayoutAttributes *_decorationAttr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *decorationAttr; // @synthesize decorationAttr=_decorationAttr;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *footerAttr; // @synthesize footerAttr=_footerAttr;
@property(retain, nonatomic) NSMutableDictionary *cellsAttr; // @synthesize cellsAttr=_cellsAttr;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *headerAttr; // @synthesize headerAttr=_headerAttr;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double cellsHeight; // @synthesize cellsHeight=_cellsHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1;
- (double)sectionHeight;
- (id)init;

@end

