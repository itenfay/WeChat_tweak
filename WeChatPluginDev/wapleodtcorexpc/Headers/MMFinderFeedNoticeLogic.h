//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderFeedNoticeModel, NSString;
@protocol MMFinderFeedNoticeLogicDelegate;

@interface MMFinderFeedNoticeLogic : NSObject
{
    MMFinderFeedNoticeModel *_model;
    id <MMFinderFeedNoticeLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderFeedNoticeLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderFeedNoticeModel *model; // @synthesize model=_model;
- (void)presentLiveConcertTicketForNoticeInfo:(id)arg1 reportingScene:(unsigned long long)arg2;
- (void)checkAndPresentLiveConcertTicketWithNoticeInfo:(id)arg1 reportingScene:(unsigned long long)arg2;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 opType:(unsigned long long)arg3 notShowAlertView:(_Bool)arg4 isFromDetailView:(_Bool)arg5;
- (void)onClickNeedPayLiveNotice:(id)arg1 username:(id)arg2 needHalfScreen:(_Bool)arg3 isFromDetailView:(_Bool)arg4;
- (void)onClickFreeLiveNotice:(id)arg1 username:(id)arg2 isFromDetailView:(_Bool)arg3;
- (void)updateNoticeDetailView:(id)arg1;
- (void)hideLiveAppointment;
- (void)audienceOperateNoticeWithNotice:(id)arg1 anchorContact:(id)arg2;
- (void)showNoticeDetailViewFromJumpInfoView:(id)arg1 withFinderUsername:(id)arg2 noticeInfo:(id)arg3;
- (void)showLiveNoticePageSheetFromJumpInfoView:(id)arg1 withFinderUsername:(id)arg2 noticeInfo:(id)arg3;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)onFinderJumpInfoView:(id)arg1 finderUsername:(id)arg2 showLiveNoticeInfo:(id)arg3;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 needHalfScreen:(_Bool)arg3 isFromDetailView:(_Bool)arg4;
- (void)updateWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

