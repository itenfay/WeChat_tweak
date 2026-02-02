//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, RichTextView, UILabel, UIView, UIVisualEffectView;
@protocol MMLiveRewardQuotaSheetViewDelegate;

@interface MMLiveRewardQuotaSheetView
{
    _Bool _wecoinBalanceUpdated;
    _Bool _needFaceVerify;
    id <MMLiveRewardQuotaSheetViewDelegate> _operationDelegate;
    NSString *_consumeQuotaVerifyUrl;
    NSString *_secverifyId;
    MMFinderLiveRewardGiftItem *_giftItem;
    FinderLiveRewardGiftExtInfo *_rewardExtInfo;
    long long _currentBalance;
    unsigned long long _rewardQuota;
    unsigned long long _sourceSendMoreBubbleHost;
    CDUnknownBlockType _confirmedCallback;
    UIView *_contentView;
    UILabel *_titleLabel;
    MMUILabel *_descLabel;
    RichTextView *_settingGuideLabel;
    UIVisualEffectView *_visualEfView;
    MMUIButton *_actionButton;
    MMUIButton *_cancelButton;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needFaceVerify; // @synthesize needFaceVerify=_needFaceVerify;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) RichTextView *settingGuideLabel; // @synthesize settingGuideLabel=_settingGuideLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType confirmedCallback; // @synthesize confirmedCallback=_confirmedCallback;
@property(nonatomic) unsigned long long sourceSendMoreBubbleHost; // @synthesize sourceSendMoreBubbleHost=_sourceSendMoreBubbleHost;
@property(nonatomic) unsigned long long rewardQuota; // @synthesize rewardQuota=_rewardQuota;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) NSString *secverifyId; // @synthesize secverifyId=_secverifyId;
@property(retain, nonatomic) NSString *consumeQuotaVerifyUrl; // @synthesize consumeQuotaVerifyUrl=_consumeQuotaVerifyUrl;
@property(nonatomic) __weak id <MMLiveRewardQuotaSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (id)audienceLogReporter;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelButton:(id)arg1;
- (void)onActionButtonClicked;
- (id)liveTask;
@property(readonly, nonatomic) _Bool faceVerify;
@property(readonly, nonatomic) NSString *cancelButtonText;
@property(readonly, nonatomic) NSString *actionButtonText;
@property(readonly, nonatomic) NSString *settingGuide;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *title;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showPageSheet;
- (void)hidePageSheet;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 rewardQuota:(unsigned long long)arg2 giftItem:(id)arg3 rewardExtInfo:(id)arg4 currentBalance:(long long)arg5 wecoinBalanceUpdated:(_Bool)arg6 needFaceVerify:(_Bool)arg7 consumeQuotaVerifyUrl:(id)arg8 secverifyId:(id)arg9 sourceSendMoreBubbleHost:(unsigned long long)arg10 confirmedCallback:(CDUnknownBlockType)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

