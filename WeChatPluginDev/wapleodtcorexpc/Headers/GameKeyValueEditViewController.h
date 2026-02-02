//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCCollectionViewManager, NSMutableArray, UICollectionView;

@interface GameKeyValueEditViewController
{
    UICollectionView *_collectionView;
    GCCollectionViewManager *_viewManager;
    NSMutableArray *_keyValueArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyValueArray; // @synthesize keyValueArray=_keyValueArray;
@property(retain, nonatomic) GCCollectionViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)viewDidLoad;
- (id)init;

@end

