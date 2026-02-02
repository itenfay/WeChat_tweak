//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WCFinderMJSetTabDataFetcher;
@protocol WCFinderMJSetTabModelDelegate;

@interface WCFinderMJSetTabModel : NSObject
{
    int _commentScene;
    id <WCFinderMJSetTabModelDelegate> _delegate;
    NSString *_tabId;
    NSString *_tabName;
    NSString *_dataScene;
    unsigned long long _dataFetchTime;
    WCFinderMJSetTabDataFetcher *_dataFetcher;
    NSMutableArray *_mutContentVMS;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutContentVMS; // @synthesize mutContentVMS=_mutContentVMS;
@property(retain, nonatomic) WCFinderMJSetTabDataFetcher *dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(readonly, nonatomic) unsigned long long dataFetchTime; // @synthesize dataFetchTime=_dataFetchTime;
@property(copy, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderMJSetTabModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDataFetcherStateChagned;
- (void)onDataFetcherAppendDataAtRange:(struct _NSRange)arg1;
- (void)deleteContentVMWithIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtIndex:(long long)arg1;
- (void)flushProviderDataItem;
- (id)createContentVMFromDataItems:(id)arg1;
- (id)createListViewModelWithDataScene:(id)arg1;
- (void)requestNextPage;
- (void)requestFirstPage:(CDUnknownBlockType)arg1;
- (void)ensureFirstPage;
@property(readonly, nonatomic) unsigned long long dataLoadedState;
@property(readonly, nonatomic) NSArray *contentVMS;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

