//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderMemberCollectionInfo;
@protocol WCFinderMemberShipFeedTabViewModelDelegate;

@interface WCFinderMemberShipFeedTabViewModel : NSObject
{
    _Bool _isAuthor;
    _Bool _continueFlag;
    _Bool _isFetchingData;
    id <WCFinderMemberShipFeedTabViewModelDelegate> _delegate;
    id <WCFinderMemberShipFeedTabViewModelDelegate> _detailDelegate;
    unsigned long long _unreadCount;
    unsigned long long _totalCount;
    NSMutableArray *_contentVMS;
    unsigned long long _state;
    NSData *_lastBuffer;
    NSString *_finderUsername;
    WCFinderMemberCollectionInfo *_memberCollectionInfo;
    NSString *_finderMemberTicket;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(copy, nonatomic) NSString *finderMemberTicket; // @synthesize finderMemberTicket=_finderMemberTicket;
@property(retain, nonatomic) WCFinderMemberCollectionInfo *memberCollectionInfo; // @synthesize memberCollectionInfo=_memberCollectionInfo;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak id <WCFinderMemberShipFeedTabViewModelDelegate> detailDelegate; // @synthesize detailDelegate=_detailDelegate;
@property(nonatomic) __weak id <WCFinderMemberShipFeedTabViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(_Bool)arg2;
- (void)deleteContentVM:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)insertPostDataItem:(id)arg1 insertIndex:(long long)arg2;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (_Bool)enableReceivePostDataItem:(id)arg1;
- (void)onGetDataArray:(id)arg1 pullFromTop:(_Bool)arg2 lastBuff:(id)arg3 continueFlag:(_Bool)arg4;
- (void)setupInitilizeDataItems:(id)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtDataIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (void)requestFirstPage;
- (void)getLocalFirstPageData;
- (void)updateState;
- (void)clearTabUnreadCount;
- (unsigned long long)tabUnreadCount;
- (id)tabPageIdentifier;
- (Class)tabControllerClass;
- (id)tabName;
- (id)initWithFinderMemberTicket:(id)arg1 finderUsername:(id)arg2 isAuthor:(_Bool)arg3 initializeDataItems:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

