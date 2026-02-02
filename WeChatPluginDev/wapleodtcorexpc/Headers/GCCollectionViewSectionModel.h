//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCCollectionViewManager, NSMutableArray;

@interface GCCollectionViewSectionModel : NSObject
{
    NSMutableArray *_itemArray;
    GCCollectionViewManager *_viewManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GCCollectionViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (void)reloadViewManager;
- (void)appendModelArray:(id)arg1;
- (void)appendModel:(id)arg1;
- (id)supplyMentaryElementReuseIdentifier:(id)arg1;
- (Class)bindSupplyMentaryElementClassOfKind:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)init;
- (void)addSpaceModel:(double)arg1;

@end

