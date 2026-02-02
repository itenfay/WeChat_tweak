//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCDataItem;

@interface WCMomentsShareScopeViewModel : NSObject
{
    _Bool _isBlackList;
    _Bool _isFilterTagDataEnabled;
    _Bool _isModifyShareScopeEnabled;
    _Bool _showBottomExpiredTip;
    WCDataItem *_hostDataItem;
    long long _privacy;
    NSString *_shareScopeTitle;
    NSArray *_usernameList;
    NSArray *_tagIdList;
    double _targetListHeight;
    long long _loadMoreThreshold;
    CDUnknownBlockType _hostDataItemUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hostDataItemUpdateBlock; // @synthesize hostDataItemUpdateBlock=_hostDataItemUpdateBlock;
@property(nonatomic) long long loadMoreThreshold; // @synthesize loadMoreThreshold=_loadMoreThreshold;
@property(nonatomic) double targetListHeight; // @synthesize targetListHeight=_targetListHeight;
@property(nonatomic) _Bool showBottomExpiredTip; // @synthesize showBottomExpiredTip=_showBottomExpiredTip;
@property(nonatomic) _Bool isModifyShareScopeEnabled; // @synthesize isModifyShareScopeEnabled=_isModifyShareScopeEnabled;
@property(nonatomic) _Bool isFilterTagDataEnabled; // @synthesize isFilterTagDataEnabled=_isFilterTagDataEnabled;
@property(retain, nonatomic) NSArray *tagIdList; // @synthesize tagIdList=_tagIdList;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList=_usernameList;
@property(retain, nonatomic) NSString *shareScopeTitle; // @synthesize shareScopeTitle=_shareScopeTitle;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(nonatomic) _Bool isBlackList; // @synthesize isBlackList=_isBlackList;
@property(retain, nonatomic) WCDataItem *hostDataItem; // @synthesize hostDataItem=_hostDataItem;
- (void)_logStatusWithMsg:(id)arg1;
- (_Bool)_shouldShowLoadMoreCellForDataList:(id)arg1 atCellIndex:(long long)arg2;
- (void)_onGetShareScopeData;
- (void)_initDataFromRawDataWithMode:(_Bool)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4;
- (void)_setupShareScopeData:(_Bool)arg1;
- (void)_resetShareScopeFromDataItem:(id)arg1;
- (void)_initDataFromDataItem:(id)arg1 isNeedForceUpdate:(_Bool)arg2;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (_Bool)shouldShowLoadMore:(long long)arg1;
- (_Bool)shouldShowLoadMoreCellForContactListAtIndex:(long long)arg1;
- (_Bool)shouldShowLoadMoreCellForTagListAtIndex:(long long)arg1;
- (id)noMoreDataTips;
- (_Bool)hasShareScopeList;
- (void)prepareDataItemWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)_initBaseData;
- (void)dealloc;
- (id)initWithBlackMode:(_Bool)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4 privacy:(long long)arg5;
- (id)initWithBlackMode:(_Bool)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4;
- (id)initWithHostDataItem:(id)arg1 isNeedForceUpdate:(_Bool)arg2;

@end

