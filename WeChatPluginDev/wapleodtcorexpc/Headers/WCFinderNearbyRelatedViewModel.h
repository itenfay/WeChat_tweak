//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderDataItem, WCFinderLocationInfo;
@protocol WCFinderNearbyRelatedViewModelDelegate;

@interface WCFinderNearbyRelatedViewModel : NSObject
{
    _Bool _isEnableContinueFetch;
    _Bool _isFetchingData;
    int _commentScene;
    id <WCFinderNearbyRelatedViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSMutableArray *_allDataItems;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuff;
    WCFinderDataItem *_enterDataItem;
    WCFinderLocationInfo *_locationInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) WCFinderLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *enterDataItem; // @synthesize enterDataItem=_enterDataItem;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool isEnableContinueFetch; // @synthesize isEnableContinueFetch=_isEnableContinueFetch;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderNearbyRelatedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPostDataItemFailed:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (_Bool)deleteDataItemWithIndex:(unsigned long long)arg1 tid:(id)arg2;
- (int)feedViewControllerScene;
- (id)contentVMAtIndex:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (unsigned long long)dataSourceItemCount;
- (unsigned long long)firstPageRefreshTime;
- (id)transformDataItems:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)fetchMoreNearbyRelated;
- (void)fetchRelatedFirstPage;
- (_Bool)isEnableFetchNextPage;
- (void)addContentVM:(id)arg1;
@property(readonly, nonatomic) NSString *enterFeedTid;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 isFromSNSPoi:(_Bool)arg2 location:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

