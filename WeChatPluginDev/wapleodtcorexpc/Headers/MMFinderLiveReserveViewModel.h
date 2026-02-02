//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderContact, FinderGetLiveNoticeResponse, FinderLiveNoticeInfo, NSDictionary, NSString, UIViewController, WCFinderLiveAudienceNoticeReporter;
@protocol MMFinderLiveReserveViewModelObserver;

@interface MMFinderLiveReserveViewModel : NSObject
{
    _Bool _canFinished;
    _Bool _isActionButtonWorking;
    _Bool _isRequesting;
    id <MMFinderLiveReserveViewModelObserver> _observer;
    UIViewController *_fromVC;
    NSString *_actionButtonTitle;
    NSString *_reserveSucceededToastContent;
    NSString *_reserveFailedToastContent;
    NSString *_cancelReserveSucceededToastContent;
    NSString *_cancelReserveFailedToastContent;
    NSString *_commentScene;
    NSString *_sceneNote;
    NSDictionary *_noticeBussinessDic;
    FinderGetLiveNoticeResponse *_reserveResponse;
    unsigned long long _finishStatus;
    NSString *_finderUsername;
    NSString *_noticeId;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderContact *_selfContact;
    WCFinderLiveAudienceNoticeReporter *_reserveActionReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *reserveActionReporter; // @synthesize reserveActionReporter=_reserveActionReporter;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool isActionButtonWorking; // @synthesize isActionButtonWorking=_isActionButtonWorking;
@property(nonatomic) _Bool canFinished; // @synthesize canFinished=_canFinished;
@property(retain, nonatomic) FinderContact *selfContact; // @synthesize selfContact=_selfContact;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long finishStatus; // @synthesize finishStatus=_finishStatus;
@property(retain, nonatomic) FinderGetLiveNoticeResponse *reserveResponse; // @synthesize reserveResponse=_reserveResponse;
@property(retain, nonatomic) NSDictionary *noticeBussinessDic; // @synthesize noticeBussinessDic=_noticeBussinessDic;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *cancelReserveFailedToastContent; // @synthesize cancelReserveFailedToastContent=_cancelReserveFailedToastContent;
@property(retain, nonatomic) NSString *cancelReserveSucceededToastContent; // @synthesize cancelReserveSucceededToastContent=_cancelReserveSucceededToastContent;
@property(retain, nonatomic) NSString *reserveFailedToastContent; // @synthesize reserveFailedToastContent=_reserveFailedToastContent;
@property(retain, nonatomic) NSString *reserveSucceededToastContent; // @synthesize reserveSucceededToastContent=_reserveSucceededToastContent;
@property(readonly, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) __weak id <MMFinderLiveReserveViewModelObserver> observer; // @synthesize observer=_observer;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)reportReserveAction:(long long)arg1;
- (void)finishedWork;
- (void)requestViewModelFinishedFromView;
- (void)onTappedLiveActionButton;
@property(readonly, nonatomic) unsigned long long reserveStatus;
@property(readonly, nonatomic) unsigned long long authIconType;
@property(readonly, nonatomic) NSString *reserveIntroduction;
@property(readonly, nonatomic) NSString *reserveLiveTime;
@property(readonly, nonatomic) NSString *finderName;
@property(readonly, nonatomic) NSString *headerImageUrl;
- (void)initFinishStatusWhenViewAppear;
- (void)loadLiveReserveData;
- (id)initWithGetLiveNoticeResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

