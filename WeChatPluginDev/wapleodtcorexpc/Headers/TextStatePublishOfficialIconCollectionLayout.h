//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface TextStatePublishOfficialIconCollectionLayout : UICollectionViewFlowLayout
{
    long long _itemCountPerRow;
}

@property(nonatomic) long long itemCountPerRow; // @synthesize itemCountPerRow=_itemCountPerRow;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)alignLayoutAttributesToPreviousRowIfNeeded:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

