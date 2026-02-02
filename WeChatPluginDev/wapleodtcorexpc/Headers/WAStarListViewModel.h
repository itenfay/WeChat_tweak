//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WAStarListViewModelDelegate;

@interface WAStarListViewModel
{
    id <WAStarListViewModelDelegate> _delegate;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <WAStarListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)notifyEditMode:(_Bool)arg1;
- (void)refreshData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)starItem:(long long)arg1;
- (_Bool)deleteItem:(long long)arg1;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMove;
- (id)dataForIndex:(long long)arg1;
- (long long)getStarNumberLimitation;
- (_Bool)isReachLimit;
- (_Bool)hasNoMore;
- (_Bool)hasData;
- (long long)count;

@end

