//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderListLoadingStateModel;
@protocol WCFinderProfilePaidCollectionVMDelegate;

@interface WCFinderProfilePaidCollectionViewModel
{
    WCFinderListLoadingStateModel *_loadingState;
    id <WCFinderProfilePaidCollectionVMDelegate> _delegate;
    NSData *_lastBuffer;
    NSMutableArray *_paidCollectionList;
    NSMutableSet *_collectionIDSet;
}

+ (int)tabId;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *collectionIDSet; // @synthesize collectionIDSet=_collectionIDSet;
@property(retain, nonatomic) NSMutableArray *paidCollectionList; // @synthesize paidCollectionList=_paidCollectionList;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) __weak id <WCFinderProfilePaidCollectionVMDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
- (id)reportParamsBlock;
- (unsigned long long)dataCount;
- (_Bool)dataEmpty;
- (id)paidCollectionWithIndexPath:(id)arg1;
- (void)updateOverViewPaidCollectionSectionDataWithTotalCount:(long long)arg1;
- (id)dataSnapshot;
- (void)clearData;
- (void)appendPaidCollections:(id)arg1;
- (void)fetchData;
- (void)fetchMoreData;
- (void)fetchFirstPageData;
@property(readonly, copy, nonatomic) NSString *finderUsername;
- (void)requestPageData;
- (_Bool)shouldDisplayTab;
- (id)init;
- (long long)sectionType;
- (id)displayName;
- (id)viewPageClassName;

@end

