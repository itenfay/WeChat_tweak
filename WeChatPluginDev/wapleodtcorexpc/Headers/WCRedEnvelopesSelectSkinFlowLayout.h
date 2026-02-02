//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class RichTextView;

@interface WCRedEnvelopesSelectSkinFlowLayout : UICollectionViewFlowLayout
{
    RichTextView *_expiredTimeLabel;
    struct CGPoint _lastOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *expiredTimeLabel; // @synthesize expiredTimeLabel=_expiredTimeLabel;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
- (double)stepSpace;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)getCopyOfAttributes:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)itemSize;
- (double)minimumLineSpacing;
- (double)collectionInset;
- (float)cellMargin;
- (double)expiredLableHeight;
- (double)cellHeight;
- (double)cellWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

