//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderLikeListViewModelDelegate;

@interface WCFinderLikeListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isForbidFetchMore;
    id <WCFinderLikeListViewModelDelegate> _delegate;
    NSMutableArray *_dataItems;
    unsigned long long _refreshTime;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuff;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForbidFetchMore; // @synthesize isForbidFetchMore=_isForbidFetchMore;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) __weak id <WCFinderLikeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)fetchMoreLikeList;
- (void)forbidFetchMore;
- (id)transformDataItems:(id)arg1;
- (void)getLocalFinderDataItem;
- (id)initWithFinderDataItem:(id)arg1 lastBuffer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

