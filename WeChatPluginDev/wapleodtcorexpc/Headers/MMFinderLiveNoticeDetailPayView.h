//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLivePrepayTiersPanelViewModel, NSString;

@interface MMFinderLiveNoticeDetailPayView
{
    _Bool _isTicket;
    CDUnknownBlockType _actionButtonBlock;
    MMFinderLivePrepayTiersPanelViewModel *_tiersViewModel;
    FinderLiveNoticeInfo *_noticeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) _Bool isTicket; // @synthesize isTicket=_isTicket;
@property(retain, nonatomic) MMFinderLivePrepayTiersPanelViewModel *tiersViewModel; // @synthesize tiersViewModel=_tiersViewModel;
@property(copy, nonatomic) CDUnknownBlockType actionButtonBlock; // @synthesize actionButtonBlock=_actionButtonBlock;
- (void)customInitMoneyLabel:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitActionButton:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onClickActionButton;
- (void)updateNoticeView;
- (void)updateModel:(id)arg1;
- (void)updateWithNoticeInfo:(id)arg1 contentHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

