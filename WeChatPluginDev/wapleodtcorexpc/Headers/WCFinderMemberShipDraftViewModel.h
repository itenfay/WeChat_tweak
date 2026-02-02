//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderMemberShipDraftViewModelDelegate;

@interface WCFinderMemberShipDraftViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    id <WCFinderMemberShipDraftViewModelDelegate> _delegate;
    unsigned long long _unreadCount;
    unsigned long long _totalCount;
    NSMutableArray *_contentVMS;
    unsigned long long _state;
    NSData *_lastBuffer;
    NSString *_finderUsername;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak id <WCFinderMemberShipDraftViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMembershipFeedDraftAdded:(id)arg1;
- (id)createDraftVM:(id)arg1;
- (void)onMembershipFeedDraftDeleted:(id)arg1;
- (void)retryItem:(id)arg1;
- (void)deleteItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)draftVMAtDataIndex:(unsigned long long)arg1;
- (id)draftVMItemWithDraftId:(id)arg1;
- (long long)indexOfDraftId:(id)arg1;
- (void)onGetDataArray:(id)arg1 pullFromTop:(_Bool)arg2 lastBuff:(id)arg3 continueFlag:(_Bool)arg4;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)updateState;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (void)getLocalFirstPageData;
- (void)requestFirstPage;
- (void)clearTabUnreadCount;
- (unsigned long long)tabUnreadCount;
- (id)tabPageIdentifier;
- (Class)tabControllerClass;
- (id)tabName;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

