//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBizInfo_BizInfo, FinderJustWatchControl, NSData, NSDictionary, NSMutableArray, NSMutableSet, NSString, WCFinderCGIProfile, WCFinderCoverLoadCostTime;
@protocol WCFinderBrandStreamProfileViewModelDelegate;

@interface WCFinderBrandStreamProfileViewModel : NSObject
{
    _Bool _isHalfScreen;
    _Bool _hasFetchData;
    _Bool _isRequestingData;
    _Bool _continueFlag;
    id <WCFinderBrandStreamProfileViewModelDelegate> _delegate;
    NSString *_bizUsername;
    unsigned long long _state;
    FinderJustWatchControl *_justWatchControl;
    NSString *_showJustWatchTid;
    long long _justWatchBannerStatus;
    long long _justWatchFeedIndex;
    WCFinderCGIProfile *_cgiProfile;
    WCFinderCoverLoadCostTime *_coverCost;
    NSDictionary *_jumpInfoDict;
    NSMutableArray *_dataArray;
    NSMutableSet *_containedTidSet;
    unsigned long long _pullType;
    NSData *_lastBuffer;
    FinderBizInfo_BizInfo *_bizInfo;
    NSMutableArray *_pendingFetchJustWatchFeedBlocks;
    NSString *_pendingCheckJustWatchTid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pendingCheckJustWatchTid; // @synthesize pendingCheckJustWatchTid=_pendingCheckJustWatchTid;
@property(retain, nonatomic) NSMutableArray *pendingFetchJustWatchFeedBlocks; // @synthesize pendingFetchJustWatchFeedBlocks=_pendingFetchJustWatchFeedBlocks;
@property(retain, nonatomic) FinderBizInfo_BizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isRequestingData; // @synthesize isRequestingData=_isRequestingData;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSMutableSet *containedTidSet; // @synthesize containedTidSet=_containedTidSet;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSDictionary *jumpInfoDict; // @synthesize jumpInfoDict=_jumpInfoDict;
@property(retain, nonatomic) WCFinderCoverLoadCostTime *coverCost; // @synthesize coverCost=_coverCost;
@property(retain, nonatomic) WCFinderCGIProfile *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(nonatomic) long long justWatchFeedIndex; // @synthesize justWatchFeedIndex=_justWatchFeedIndex;
@property(nonatomic) long long justWatchBannerStatus; // @synthesize justWatchBannerStatus=_justWatchBannerStatus;
@property(retain, nonatomic) NSString *showJustWatchTid; // @synthesize showJustWatchTid=_showJustWatchTid;
@property(retain, nonatomic) FinderJustWatchControl *justWatchControl; // @synthesize justWatchControl=_justWatchControl;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(nonatomic) __weak id <WCFinderBrandStreamProfileViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderUserPageFetchSuccess:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)tranformDataItemArray:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)createFinderBrandProfileViewModel;
- (void)checkJustWatchAfterLoadFeeds:(_Bool)arg1;
- (void)invokeJustWatchWaitBlocks:(_Bool)arg1;
- (void)addRequestNextPageBlocks:(CDUnknownBlockType)arg1;
- (void)_continueFetchJustWatchFeed:(id)arg1 limit:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)fetchJustWatchFeed:(CDUnknownBlockType)arg1;
- (void)requestNextData;
- (void)requestDataFromTop;
- (id)indexPathForTid:(id)arg1;
- (id)contentVMForTid:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItem;
- (id)dataList;
- (id)fromTid;
- (id)finderUsername;
- (int)fromFinderScene;
- (_Bool)isFromFinder;
- (void)fetchLocalDataItems;
- (id)initWithBizUsername:(id)arg1 brandFinderJumpInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

