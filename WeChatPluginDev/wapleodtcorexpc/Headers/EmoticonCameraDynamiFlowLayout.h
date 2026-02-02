//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol EmoticonCameraDynamiFlowLayoutDelegate;

@interface EmoticonCameraDynamiFlowLayout : UICollectionViewFlowLayout
{
    id <EmoticonCameraDynamiFlowLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonCameraDynamiFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;

@end

