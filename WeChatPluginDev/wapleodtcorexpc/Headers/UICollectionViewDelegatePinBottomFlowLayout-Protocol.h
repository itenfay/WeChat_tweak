//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol UICollectionViewDelegatePinBottomFlowLayout <UICollectionViewDelegateFlowLayout>

@optional
- (NSIndexPath *)indexPathForItemPinnedBottomInCollectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;
@end

