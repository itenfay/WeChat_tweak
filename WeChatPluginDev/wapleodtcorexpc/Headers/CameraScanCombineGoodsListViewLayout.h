//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol CameraScanCombineGoodsListViewLayoutDelegate;

@interface CameraScanCombineGoodsListViewLayout : UICollectionViewLayout
{
    id <CameraScanCombineGoodsListViewLayoutDelegate> _delegate;
    NSMutableArray *_attributesArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(nonatomic) __weak id <CameraScanCombineGoodsListViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (double)gradienLayerMaskHeight;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

