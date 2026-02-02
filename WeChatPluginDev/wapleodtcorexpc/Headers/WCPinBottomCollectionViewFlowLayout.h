//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;
@protocol UICollectionViewDelegatePinBottomFlowLayout;

@interface WCPinBottomCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_indexPathForItemPinnedBottom;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPathForItemPinnedBottom; // @synthesize indexPathForItemPinnedBottom=_indexPathForItemPinnedBottom;
- (double)currentCollectionViewBoundsBottom;
@property(readonly, nonatomic) __weak id <UICollectionViewDelegatePinBottomFlowLayout> collectionViewDelegate;
- (struct CGRect)pinnedItemBackgroundFrame;
- (_Bool)needPinBottom;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)setScrollDirection:(long long)arg1;
- (id)init;

@end

