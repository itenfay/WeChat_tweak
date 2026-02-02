//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface GCMinContentSizeFlowLayout : UICollectionViewFlowLayout
{
    double _gcHorizonalAlignedPageWidth;
    struct CGSize _gcMinContentSize;
}

@property(nonatomic) double gcHorizonalAlignedPageWidth; // @synthesize gcHorizonalAlignedPageWidth=_gcHorizonalAlignedPageWidth;
@property(nonatomic) struct CGSize gcMinContentSize; // @synthesize gcMinContentSize=_gcMinContentSize;
- (struct CGSize)gcRealContentSize;
- (struct CGSize)collectionViewContentSize;

@end

