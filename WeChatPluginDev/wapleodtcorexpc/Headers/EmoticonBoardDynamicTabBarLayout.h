//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSIndexPath, NSMutableArray, UIColor;

@interface EmoticonBoardDynamicTabBarLayout : UICollectionViewLayout
{
    _Bool _useMaskSelection;
    double _itemSpacing;
    UIColor *_backgroundColor;
    NSIndexPath *_maskSelectedIndexPath;
    NSMutableArray *_indexPaths;
    struct CGSize _itemSize;
    struct UIEdgeInsets _inset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(retain, nonatomic) NSIndexPath *maskSelectedIndexPath; // @synthesize maskSelectedIndexPath=_maskSelectedIndexPath;
@property(nonatomic) _Bool useMaskSelection; // @synthesize useMaskSelection=_useMaskSelection;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (id)getSelectionMaskLayerAtIndexPath:(id)arg1;
- (void)updateBackgroundView;
- (id)getBackgroundView;
- (double)virtualIndexForX:(double)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

