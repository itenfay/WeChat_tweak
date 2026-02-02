//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;
@protocol MJPrecisionPickerViewLayoutDelegate;

@interface MJPrecisionPickerViewLayout : UICollectionViewFlowLayout
{
    double _labelHeight;
    id <MJPrecisionPickerViewLayoutDelegate> _delegate;
    NSMutableDictionary *_labelLayoutAttributesCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *labelLayoutAttributesCache; // @synthesize labelLayoutAttributesCache=_labelLayoutAttributesCache;
@property(nonatomic) __weak id <MJPrecisionPickerViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

