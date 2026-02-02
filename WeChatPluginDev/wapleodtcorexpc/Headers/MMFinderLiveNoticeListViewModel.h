//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeListInfo, MMFinderLiveNoticeMoreViewItem, NSArray, NSMutableSet, NSString, WCFinderContact, WCFinderLiveAudienceNoticeReporter;
@protocol MMFinderLiveNoticeListViewModelDelegate;

@interface MMFinderLiveNoticeListViewModel : NSObject
{
    _Bool _isAuthoredByCurrentUser;
    _Bool _isRequestingPreviousPage;
    _Bool _isRequestingNextPage;
    _Bool _blocksRequestingPages;
    unsigned int _enterType;
    int _reportScene;
    MMFinderLiveNoticeMoreViewItem *_morePreviousPageViewItem;
    MMFinderLiveNoticeMoreViewItem *_moreNextPageViewItem;
    WCFinderLiveAudienceNoticeReporter *_noticeReporter;
    id <MMFinderLiveNoticeListViewModelDelegate> _delegate;
    WCFinderContact *_finderContact;
    NSString *_targetNoticeId;
    NSString *_promoterToken;
    NSString *_qrCodeURL;
    NSString *_qrCodeTargetNoticeID;
    NSString *_refPageType;
    unsigned long long _openScene;
    FinderLiveNoticeListInfo *_originalNoticeList;
    NSArray *_viewItems;
    CDUnknownBlockType _onCustomReportNoticeDisplay;
    CDUnknownBlockType _onCustomReportNoticeClick;
    NSArray *_aggregateTypeArray;
    NSArray *_infoViewItems;
    NSMutableSet *_exposedNoticeIdSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedNoticeIdSet; // @synthesize exposedNoticeIdSet=_exposedNoticeIdSet;
@property(copy, nonatomic) NSArray *infoViewItems; // @synthesize infoViewItems=_infoViewItems;
@property(retain, nonatomic) NSArray *aggregateTypeArray; // @synthesize aggregateTypeArray=_aggregateTypeArray;
@property(copy, nonatomic) CDUnknownBlockType onCustomReportNoticeClick; // @synthesize onCustomReportNoticeClick=_onCustomReportNoticeClick;
@property(copy, nonatomic) CDUnknownBlockType onCustomReportNoticeDisplay; // @synthesize onCustomReportNoticeDisplay=_onCustomReportNoticeDisplay;
@property(nonatomic) _Bool blocksRequestingPages; // @synthesize blocksRequestingPages=_blocksRequestingPages;
@property(nonatomic) _Bool isRequestingNextPage; // @synthesize isRequestingNextPage=_isRequestingNextPage;
@property(nonatomic) _Bool isRequestingPreviousPage; // @synthesize isRequestingPreviousPage=_isRequestingPreviousPage;
@property(copy, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
@property(retain, nonatomic) FinderLiveNoticeListInfo *originalNoticeList; // @synthesize originalNoticeList=_originalNoticeList;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(retain, nonatomic) NSString *refPageType; // @synthesize refPageType=_refPageType;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(copy, nonatomic) NSString *qrCodeTargetNoticeID; // @synthesize qrCodeTargetNoticeID=_qrCodeTargetNoticeID;
@property(copy, nonatomic) NSString *qrCodeURL; // @synthesize qrCodeURL=_qrCodeURL;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *targetNoticeId; // @synthesize targetNoticeId=_targetNoticeId;
@property(readonly, nonatomic) _Bool isAuthoredByCurrentUser; // @synthesize isAuthoredByCurrentUser=_isAuthoredByCurrentUser;
@property(readonly, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(nonatomic) __weak id <MMFinderLiveNoticeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMemberNoticeScene;
- (void)onCouponDidUpdate:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (id)dataReportDictWithNoticeInfo:(id)arg1;
- (void)reportCancellingReservingAllNoticeInfosWithList:(id)arg1;
- (void)reportReservingAllNoticeInfosWithList:(id)arg1;
- (void)reportCancellingReservingNoticeInfo:(id)arg1;
- (void)reportReservingNoticeInfo:(id)arg1;
- (void)reportDisplayingNoticeInfo:(id)arg1;
- (id)baseAudienceNoticeReportParams:(id)arg1;
@property(readonly, nonatomic) WCFinderLiveAudienceNoticeReporter *noticeReporter; // @synthesize noticeReporter=_noticeReporter;
- (void)reportShowExistingConcertTicketActionForNoticeInfo:(id)arg1;
- (void)getConcertTicketReceiveStatusForNoticeInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelReservingAllNoticesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reserveAllNoticesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelReservingNoticeInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reserveNoticeInfo:(id)arg1 notShowAlertView:(_Bool)arg2 successAlert:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getAudienceReserveLiveCGIExtentParamsForNoticeID:(id)arg1;
- (void)didReloadReserveStatus;
- (void)requestPreviousPage;
- (void)requestNextPage:(_Bool)arg1;
- (id)getFirstNoticeInfo;
- (id)getLastNoticeInfo;
- (void)requestNextPage;
- (void)refreshCurrentPage;
- (void)didViewNoticeInfo:(id)arg1;
- (void)didDisplayViewItem:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveNoticeMoreViewItem *moreNextPageViewItem; // @synthesize moreNextPageViewItem=_moreNextPageViewItem;
@property(readonly, nonatomic) MMFinderLiveNoticeMoreViewItem *morePreviousPageViewItem; // @synthesize morePreviousPageViewItem=_morePreviousPageViewItem;
- (id)viewItemWithNoticeInfo:(id)arg1;
- (void)updateMoreViewItems;
- (void)didBatchUpdateDataWithRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 updatedIndexes:(id)arg3;
- (void)batchUpdateDataWithInsertedIndexes:(id)arg1;
- (void)didReloadData;
- (void)reloadViewItems;
- (void)removeNoticeInfo:(id)arg1;
- (void)prependNoticeList:(id)arg1;
- (void)appendNoticeList:(id)arg1;
- (void)reloadWithNoticeList:(id)arg1;
- (id)viewItemForNoticeId:(id)arg1 indexPath:(id *)arg2;
@property(readonly, nonatomic) unsigned long long reservedNoticeCount;
@property(readonly, nonatomic) unsigned long long totalNoticeCount;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(_Bool)arg2 aggregateTypeArray:(id)arg3;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(_Bool)arg2 aggregateType:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

