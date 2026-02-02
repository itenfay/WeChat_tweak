//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiStreamNearbyInfo, FinderPoiStreamTabList_FinderPoiStreamTabItem, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderPOIParamsModel;
@protocol WCFinderPoiDetailViewModelDelegate;

@interface WCFinderPoiDetailViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isRequestingData;
    _Bool _nearbyFlag;
    int _commentScene;
    id <WCFinderPoiDetailViewModelDelegate> _delegate;
    NSMutableArray *_contentVMArray;
    FinderPoiStreamTabList_FinderPoiStreamTabItem *_tabInfo;
    WCFinderPOIParamsModel *_params;
    NSMutableSet *_containedTidSet;
    NSData *_lastBuffer;
    unsigned long long _state;
    NSString *_syncKey;
    FinderPoiStreamNearbyInfo *_nearbyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @synthesize nearbyInfo=_nearbyInfo;
@property(nonatomic) _Bool nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(copy, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isRequestingData; // @synthesize isRequestingData=_isRequestingData;
@property(retain, nonatomic) NSMutableSet *containedTidSet; // @synthesize containedTidSet=_containedTidSet;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderPOIParamsModel *params; // @synthesize params=_params;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) FinderPoiStreamTabList_FinderPoiStreamTabItem *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) __weak id <WCFinderPoiDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)filterDataArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)tranformDataItemArray:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)deleteContentVMWithIndex:(unsigned long long)arg1;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtIndex:(long long)arg1;
- (unsigned long long)numberOfItem;
@property(readonly, nonatomic) NSString *minimizeBizKey;
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 DataArray:(id)arg3 lastBuffer:(id)arg4 continueFlag:(_Bool)arg5 commentScene:(int)arg6 syncKey:(id)arg7;

@end

