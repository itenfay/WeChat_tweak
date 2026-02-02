//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UICollectionView;

@interface WCFinderProfileOverviewCollectionCellRegister : NSObject
{
    UICollectionView *_collectionView;
}

+ (id)newWithCollectionView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)registerHeader:(Class)arg1 identifier:(id)arg2;
- (void)registerFooter:(Class)arg1 identifier:(id)arg2;
- (void)registerCell:(Class)arg1;

@end

