//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface EmoticonCustomManageCollectionLayout : UICollectionViewFlowLayout
{
    _Bool _isMoving;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
- (id)indexPathsOfSeparatorsWithCellAttrs:(id)arg1 inRect:(struct CGRect)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;

@end

