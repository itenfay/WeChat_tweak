//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, MMFinderLiveFeedNoticeDetailView, MMFinderLiveNoticeDetailPayView, MMFinderLivePurchaseConcertTicketView, MMFinderLiveTaskId, MMPageSheetAdapter, MMUIViewController, MMWebViewController, NSData, NSString, WCFinderContact;

@interface MMFinderLiveBuyTicketHandle : NSObject
{
    _Bool _showHideButton;
    _Bool _needHalfScreen;
    int _reportScene;
    FinderLiveNoticeInfo *_noticeInfo;
    MMFinderLiveNoticeDetailPayView *_noticePayView;
    MMFinderLiveFeedNoticeDetailView *_feedNoticeDetailView;
    MMFinderLivePurchaseConcertTicketView *_purchaseConcertTicketView;
    WCFinderContact *_anchorContact;
    MMUIViewController *_showToastViewController;
    NSData *_liveCookies;
    MMFinderLiveTaskId *_taskId;
    NSString *_sessionBuffer;
    CDUnknownBlockType _showTicketBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _receiveCouponBlock;
    CDUnknownBlockType _unLikeBlock;
    long long _scene;
    NSString *_adapterUrl;
    MMPageSheetAdapter *_rootPageSheet;
    MMWebViewController *_webVC;
}

+ (_Bool)canPay:(id)arg1;
+ (_Bool)isConcert:(id)arg1;
+ (_Bool)hasNoticePay:(id)arg1;
+ (_Bool)isNoticeNeedPayment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) MMPageSheetAdapter *rootPageSheet; // @synthesize rootPageSheet=_rootPageSheet;
@property(retain, nonatomic) NSString *adapterUrl; // @synthesize adapterUrl=_adapterUrl;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType unLikeBlock; // @synthesize unLikeBlock=_unLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType receiveCouponBlock; // @synthesize receiveCouponBlock=_receiveCouponBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType showTicketBlock; // @synthesize showTicketBlock=_showTicketBlock;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) __weak MMUIViewController *showToastViewController; // @synthesize showToastViewController=_showToastViewController;
@property(nonatomic) _Bool needHalfScreen; // @synthesize needHalfScreen=_needHalfScreen;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool showHideButton; // @synthesize showHideButton=_showHideButton;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) MMFinderLivePurchaseConcertTicketView *purchaseConcertTicketView; // @synthesize purchaseConcertTicketView=_purchaseConcertTicketView;
@property(retain, nonatomic) MMFinderLiveFeedNoticeDetailView *feedNoticeDetailView; // @synthesize feedNoticeDetailView=_feedNoticeDetailView;
@property(retain, nonatomic) MMFinderLiveNoticeDetailPayView *noticePayView; // @synthesize noticePayView=_noticePayView;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (void)refreshDetailView;
- (void)updateShowingLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 scene:(long long)arg3;
- (void)exitShowLiveNoticeDetailIfNeeded:(_Bool)arg1;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(_Bool)arg6 reportScene:(int)arg7 actionBlock:(CDUnknownBlockType)arg8 unLikeBlock:(CDUnknownBlockType)arg9 receiveCouponBlock:(CDUnknownBlockType)arg10;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 actionBlock:(CDUnknownBlockType)arg6 unLikeBlock:(CDUnknownBlockType)arg7 receiveCouponBlock:(CDUnknownBlockType)arg8;
- (id)createWebPageSheetNavWithParams:(id)arg1 preload:(_Bool)arg2;
- (id)preLoadConcertPageSheetWithParams:(id)arg1;
- (void)openWebPageSheetWithParams:(id)arg1 scene:(long long)arg2 showInView:(id)arg3;
- (void)handleError;
- (void)onCoinButtonClicked;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)starOrderWithTiersViewModel:(id)arg1;
- (void)handleLiveNoticePayViewWithTiersViewModel:(id)arg1 needHalfScreen:(_Bool)arg2 isTicket:(_Bool)arg3;
- (void)showLiveNoticePayViewWithTiersViewModel:(id)arg1 needHalfScreen:(_Bool)arg2 isTicket:(_Bool)arg3;
- (void)handleFailure:(int)arg1 errorMsg:(id)arg2;
- (void)showTicketClick:(_Bool)arg1;
- (void)showRequestLiveGetPaymentItemsLoading;
- (void)requestLiveGetPaymentItems:(id)arg1 needHalfScreen:(_Bool)arg2 isTicket:(_Bool)arg3 showToastViewController:(id)arg4 liveCookies:(id)arg5 taskId:(id)arg6 sessionBuffer:(id)arg7 showTicketBlock:(CDUnknownBlockType)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

