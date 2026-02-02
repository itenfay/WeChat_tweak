//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAddMusicListItem, MMFinderLiveTaskId, NSData, NSMutableArray, NSString, UITableView;
@protocol MMFinderLiveMusicTingListViewModelDelegate;

@interface MMFinderLiveMusicTingListViewModel : NSObject
{
    _Bool _isFetchingNextPage;
    unsigned int _tabType;
    unsigned int _continueFlag;
    id <MMFinderLiveMusicTingListViewModelDelegate> _delegate;
    UITableView *_currentTableView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveAddMusicListItem *_tingListItem;
    NSMutableArray *_dataItems;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingNextPage; // @synthesize isFetchingNextPage=_isFetchingNextPage;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) MMFinderLiveAddMusicListItem *tingListItem; // @synthesize tingListItem=_tingListItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak UITableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(nonatomic) __weak id <MMFinderLiveMusicTingListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appendMusicItem:(id)arg1;
- (void)fetchNextPageData;
- (void)fetchNextPageDataIfNeed;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithTaskId:(id)arg1 tingListItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

