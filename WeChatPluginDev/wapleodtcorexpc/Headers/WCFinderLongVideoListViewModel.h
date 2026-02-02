//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, NSData, NSMutableDictionary, NSString, WCFinderFeedArray;
@protocol WCFinderLongVideoListViewModelDelegate;

@interface WCFinderLongVideoListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    _Bool _seeLaterContinueFlag;
    WCFinderFeedArray *_dataSource;
    NSData *_lastBuffer;
    NSMutableDictionary *_cellSizeDictionary;
    id <WCFinderLongVideoListViewModelDelegate> _delegate;
    unsigned long long _prefetchLastFeedCount;
    AnyPromise *_seeLaterPromise;
    WCFinderFeedArray *_seeLaterFeedArray;
    NSData *_seeLaterLastBuffer;
    NSString *_seeLaterSessionID;
    unsigned long long _refreshNum;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long refreshNum; // @synthesize refreshNum=_refreshNum;
@property(copy, nonatomic) NSString *seeLaterSessionID; // @synthesize seeLaterSessionID=_seeLaterSessionID;
@property(copy, nonatomic) NSData *seeLaterLastBuffer; // @synthesize seeLaterLastBuffer=_seeLaterLastBuffer;
@property(nonatomic) _Bool seeLaterContinueFlag; // @synthesize seeLaterContinueFlag=_seeLaterContinueFlag;
@property(retain, nonatomic) WCFinderFeedArray *seeLaterFeedArray; // @synthesize seeLaterFeedArray=_seeLaterFeedArray;
@property(retain, nonatomic) AnyPromise *seeLaterPromise; // @synthesize seeLaterPromise=_seeLaterPromise;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) unsigned long long prefetchLastFeedCount; // @synthesize prefetchLastFeedCount=_prefetchLastFeedCount;
@property(nonatomic) __weak id <WCFinderLongVideoListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableDictionary *cellSizeDictionary; // @synthesize cellSizeDictionary=_cellSizeDictionary;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderFeedArray *dataSource; // @synthesize dataSource=_dataSource;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtDataIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)onSeeLaterStateChanged:(_Bool)arg1 withDataItem:(id)arg2;
- (int)commentScene;
- (id)genSeeLaterListVM;
- (_Bool)shouldShowMoreSeeLater;
- (id)seeLaterContentVM;
- (id)snapShot;
- (void)requestDataWithPullType:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestLongVideoData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
- (void)requestSeeLaterData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2 needCallDelegate:(_Bool)arg3;
- (void)requestSeeLaterData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

