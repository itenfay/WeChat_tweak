//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorPromoteInfo, MMFinderLiveTaskId, MMTableView, NSData, NSMutableArray, NSString, WCFinderRefreshTableFooterView;
@protocol MMFinderLivePromoteListViewModelDelegate;

@interface MMFinderLivePromoteListBaseViewModel : NSObject
{
    _Bool _hasMore;
    _Bool _isLoading;
    unsigned int _type;
    id <MMFinderLivePromoteListViewModelDelegate> _delegate;
    CDUnknownBlockType _fetchCompleteBlock;
    NSString *_titleText;
    long long _titleCount;
    MMTableView *_mainTableView;
    WCFinderRefreshTableFooterView *_footerView;
    MMFinderLiveAnchorPromoteInfo *_currentShowPromoteInfo;
    MMFinderLiveTaskId *_taskId;
    NSString *_anchorFinderUsername;
    NSMutableArray *_dataArray;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveAnchorPromoteInfo *currentShowPromoteInfo; // @synthesize currentShowPromoteInfo=_currentShowPromoteInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) __weak WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) long long titleCount; // @synthesize titleCount=_titleCount;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) CDUnknownBlockType fetchCompleteBlock; // @synthesize fetchCompleteBlock=_fetchCompleteBlock;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak id <MMFinderLivePromoteListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addButtonClicked;
- (void)categoryItem:(id)arg1 onCategoryChangeEvent:(unsigned long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isContainItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addModlWithDataArray:(id)arg1 data:(id)arg2 type:(unsigned int)arg3;
- (void)getBussinessModelFromData:(id)arg1 type:(unsigned int)arg2 refreshType:(long long)arg3;
- (void)realRefreshTableView;
- (void)refreshData:(id)arg1 type:(unsigned int)arg2 refreshType:(long long)arg3;
- (void)fetchData;
- (void)refreshWithWithTaskId:(id)arg1 anchorFinderUsername:(id)arg2 type:(unsigned int)arg3 refreshType:(long long)arg4 lastBuffer:(id)arg5 completeBlock:(CDUnknownBlockType)arg6;
- (void)refreshWithWithRefreshType:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)refreshDataWithType:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)initWithTaskId:(id)arg1 anchorFinderUsername:(id)arg2 type:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

