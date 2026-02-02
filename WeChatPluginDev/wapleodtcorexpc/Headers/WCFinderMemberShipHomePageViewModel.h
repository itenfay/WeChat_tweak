//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderMemberShipHomePage;
@protocol WCFinderMemberShipHomePageViewModelDelegate;

@interface WCFinderMemberShipHomePageViewModel : NSObject
{
    _Bool _isAuthor;
    id <WCFinderMemberShipHomePageViewModelDelegate> _delegate;
    unsigned long long _unreadCount;
    unsigned long long _totalCount;
    NSString *_finderUsername;
    NSMutableArray *_displayPageModels;
    WCFinderMemberShipHomePage *_currentPage;
    NSString *_finderMemberTicket;
    NSString *_redirectFeedID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(copy, nonatomic) NSString *finderMemberTicket; // @synthesize finderMemberTicket=_finderMemberTicket;
@property(retain, nonatomic) WCFinderMemberShipHomePage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *displayPageModels; // @synthesize displayPageModels=_displayPageModels;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak id <WCFinderMemberShipHomePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestRemoteFirstPageData;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(_Bool)arg2;
- (void)deleteContentVM:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)insertOrUpdateDataItem:(id)arg1 refTid:(id)arg2 pageArray:(id)arg3;
- (void)insertOrUpdateDataItem:(id)arg1 refTid:(id)arg2;
- (void)onMemberShipQAPostSessionStartUpload:(id)arg1;
- (void)onMemberShipQAPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipQAPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (_Bool)enableReceivePostDataItem:(id)arg1;
- (CDUnknownBlockType)createPageCacheFetcher:(unsigned long long)arg1;
- (CDUnknownBlockType)createAuthorPostingFeedFetcher;
- (CDUnknownBlockType)createFeedMapper;
- (void)requestFirstPage;
- (void)getLocalFirstPageData;
- (void)updateSelectedPage:(id)arg1;
- (void)clearTabUnreadCount;
- (unsigned long long)tabUnreadCount;
- (id)tabPageIdentifier;
- (Class)tabControllerClass;
- (id)tabName;
- (id)initWithFinderMemberTicket:(id)arg1 finderUsername:(id)arg2 isAuthor:(_Bool)arg3 redirectFeedID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

