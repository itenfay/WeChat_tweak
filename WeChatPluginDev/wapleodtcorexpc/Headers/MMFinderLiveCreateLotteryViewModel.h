//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCreateLotteryOperationView, NSMutableArray, NSString;
@protocol MMFinderLiveCreateLotteryViewModelDelegate;

@interface MMFinderLiveCreateLotteryViewModel : NSObject
{
    _Bool _isFromStaterVC;
    _Bool _isGameLive;
    id <MMFinderLiveCreateLotteryViewModelDelegate> _delegate;
    MMFinderLiveCreateLotteryOperationView *_createLotteryOperationView;
    long long _locationId;
    long long _dataVersion;
    NSMutableArray *_dataArray;
    NSMutableArray *_showArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *showArray; // @synthesize showArray=_showArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool isGameLive; // @synthesize isGameLive=_isGameLive;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(nonatomic) long long locationId; // @synthesize locationId=_locationId;
@property(nonatomic) _Bool isFromStaterVC; // @synthesize isFromStaterVC=_isFromStaterVC;
@property(retain, nonatomic) MMFinderLiveCreateLotteryOperationView *createLotteryOperationView; // @synthesize createLotteryOperationView=_createLotteryOperationView;
@property(nonatomic) __weak id <MMFinderLiveCreateLotteryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isComeFromStaterVC;
- (id)getScrollToRowAtIndexPath;
- (void)onLiveLotteryRecordClick;
- (id)getCreateLotteryOperationView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)actionButtonClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createLotteryClick;
- (double)getLotteryTableHeight;
- (long long)currentLoadDataCount;
- (void)updateSingleModel:(id)arg1;
- (_Bool)checkStateLotteryMethodData:(id)arg1;
- (void)appendLotteryMethodData:(id)arg1;
- (id)createData;
- (void)hideCreateLotteryOperationView;
- (void)showCreateLotteryOperationView;
- (_Bool)needFilterLotteryDataItem:(id)arg1;
- (void)onUpdateFreeGameTeamUpLottery;
- (void)onUpdateLotteryIsGameMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

