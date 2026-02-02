//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderMemberShipPreviewListViewModelDelegate;

@interface WCFinderMemberShipPreviewListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    id <WCFinderMemberShipPreviewListViewModelDelegate> _delegate;
    unsigned long long _state;
    NSMutableArray *_contentVMS;
    unsigned long long _feedPageType;
    NSString *_finderUsername;
    NSData *_lastBuffer;
    NSMutableSet *_tidContainSet;
    unsigned long long _collectionTopicId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long collectionTopicId; // @synthesize collectionTopicId=_collectionTopicId;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long feedPageType; // @synthesize feedPageType=_feedPageType;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderMemberShipPreviewListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)feedViewControllerViewId;
- (unsigned long long)feedViewControllerPageId;
- (int)feedViewControllerScene;
- (void)onGetDataArray:(id)arg1 pullFromTop:(_Bool)arg2 lastBuff:(id)arg3 continueFlag:(_Bool)arg4;
- (void)requestFeedDataWithPullType:(unsigned long long)arg1 lastBuff:(id)arg2 isFirstPage:(_Bool)arg3;
- (void)requestCollectionInfoDataWithPullType:(unsigned long long)arg1 lastBuff:(id)arg2 isFirstPage:(_Bool)arg3;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (void)getLocalFirstPageData;
- (void)updateState;
- (id)initWithFinderUsername:(id)arg1 feedPageType:(unsigned long long)arg2 lastBuffer:(id)arg3 collectionTopicId:(unsigned long long)arg4;

@end

