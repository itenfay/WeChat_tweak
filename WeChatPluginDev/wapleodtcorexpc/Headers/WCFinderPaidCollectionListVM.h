//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderListLoadingStateModel;
@protocol WCFinderPaidCollectionListVMDelegate;

@interface WCFinderPaidCollectionListVM : NSObject
{
    id <WCFinderPaidCollectionListVMDelegate> _delegate;
    WCFinderListLoadingStateModel *_loadingState;
    NSString *_finderUsername;
    NSData *_lastBuffer;
    NSMutableArray *_paidCollectionList;
    NSMutableSet *_paidCollectionIDSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *paidCollectionIDSet; // @synthesize paidCollectionIDSet=_paidCollectionIDSet;
@property(retain, nonatomic) NSMutableArray *paidCollectionList; // @synthesize paidCollectionList=_paidCollectionList;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak id <WCFinderPaidCollectionListVMDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)dataCount;
- (_Bool)dataEmpty;
- (void)clearData;
- (id)paidCollectionWithIndexPath:(id)arg1;
- (id)dataSnapshot;
- (void)appendPaidCollections:(id)arg1;
- (void)fetchData;
- (void)fetchMoreData;
- (void)fetchFirstPageData;
- (id)initWithFinderUsername:(id)arg1;

@end

