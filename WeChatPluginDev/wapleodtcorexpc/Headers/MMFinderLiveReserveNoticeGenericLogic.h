//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, MMFinderLiveBuyTicketHandle, MMUIViewController, NSString, WCFinderBaseCgi, WCFinderContact, WCLiveActionSheet;

@interface MMFinderLiveReserveNoticeGenericLogic : NSObject
{
    unsigned int _scene;
    int _reportScene;
    FinderLiveNoticeInfo *_noticeInfo;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    MMUIViewController *_vc;
    WCFinderContact *_contact;
    WCLiveActionSheet *_actionSheet;
    WCFinderBaseCgi *_reserveNoticeCGI;
}

- (void).cxx_destruct;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderBaseCgi *reserveNoticeCGI; // @synthesize reserveNoticeCGI=_reserveNoticeCGI;
@property(retain, nonatomic) WCLiveActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeNoticeStatus;
- (void)subscribeNotice:(_Bool)arg1 isFromDetailView:(_Bool)arg2;
- (void)showActionSheetForUnReserve;
- (void)handleSubscribeAction:(_Bool)arg1 isFromDetailView:(_Bool)arg2;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)process:(id)arg1 handler:(id)arg2 vc:(id)arg3 contact:(id)arg4 reportScene:(int)arg5 scene:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

