//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewDiffableDataSource.h>

@class NSDiffableDataSourceSnapshot;

@interface WCFinderCollectionViewDataSource : UICollectionViewDiffableDataSource
{
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;

@end

