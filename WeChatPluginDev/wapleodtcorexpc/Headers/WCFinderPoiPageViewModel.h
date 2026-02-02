//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiStreamNearbyInfo, FinderPoiStreamTabList_FinderPoiStreamTabItem, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderPOIParamsModel;
@protocol WCFinderPoiPageViewModelDelegate;

@interface WCFinderPoiPageViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _nearbyFlag;
    int _commentScene;
    id <WCFinderPoiPageViewModelDelegate> _delegate;
    NSMutableArray *_contentVMArray;
    NSMutableArray *_currentVMArray;
    NSMutableArray *_nearbyVMArray;
    WCFinderPOIParamsModel *_params;
    FinderPoiStreamTabList_FinderPoiStreamTabItem *_tabInfo;
    NSData *_lastBuffer;
    unsigned long long _state;
    unsigned long long _refreshTime;
    NSString *_syncKey;
    NSString *_nearbyWording;
    FinderPoiStreamNearbyInfo *_nearbyInfo;
    unsigned long long _tabIndex;
    unsigned long long _filterIndex;
    unsigned long long _prefetchCount;
    NSMutableSet *_containedTidSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *containedTidSet; // @synthesize containedTidSet=_containedTidSet;
@property(nonatomic) unsigned long long prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @synthesize nearbyInfo=_nearbyInfo;
@property(nonatomic) _Bool nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(copy, nonatomic) NSString *nearbyWording; // @synthesize nearbyWording=_nearbyWording;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) FinderPoiStreamTabList_FinderPoiStreamTabItem *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(retain, nonatomic) WCFinderPOIParamsModel *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *nearbyVMArray; // @synthesize nearbyVMArray=_nearbyVMArray;
@property(retain, nonatomic) NSMutableArray *currentVMArray; // @synthesize currentVMArray=_currentVMArray;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) __weak id <WCFinderPoiPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)filterType;
- (id)filterInfo;
- (void)onFinderPoiStreamAppendData:(id)arg1 nearbyFlag:(_Bool)arg2 nearbyInfo:(id)arg3;
- (void)onFinderPoiStreamReloadAllData:(id)arg1 nearbyFlag:(_Bool)arg2 nearbyInfo:(id)arg3;
- (_Bool)isCustomSupplementaryViewOfKind:(id)arg1 atSection:(long long)arg2;
- (unsigned long long)offsetAtIndexPath:(id)arg1;
- (id)indexPathForContentVMTid:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)updateState;
- (id)filterDataArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)tranformDataItemArray:(id)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestNextPageDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestFirstPageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 tabIndex:(unsigned long long)arg3 filterIndex:(unsigned long long)arg4 DataArray:(id)arg5 lastBuffer:(id)arg6 continueFlag:(_Bool)arg7 commentScene:(int)arg8 nearbyFlag:(_Bool)arg9 nearbyInfo:(id)arg10 prefetchCount:(unsigned long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

