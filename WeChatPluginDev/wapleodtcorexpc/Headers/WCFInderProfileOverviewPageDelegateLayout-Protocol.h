//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionView, WCFInderProfileOverviewPageLayout;

@protocol WCFInderProfileOverviewPageDelegateLayout <NSObject>
- (long long)collectionView:(UICollectionView *)arg1 layout:(WCFInderProfileOverviewPageLayout *)arg2 seperatorForSection:(long long)arg3;

@optional
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(WCFInderProfileOverviewPageLayout *)arg2 contentInsetsForSetion:(long long)arg3 position:(long long)arg4;
@end

