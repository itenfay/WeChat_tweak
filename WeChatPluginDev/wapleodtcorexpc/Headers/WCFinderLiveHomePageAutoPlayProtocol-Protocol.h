//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UICollectionView;

@protocol WCFinderLiveHomePageAutoPlayProtocol <NSObject>
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (void)autoPlayStop;
- (void)autoPlayStart;
@end

