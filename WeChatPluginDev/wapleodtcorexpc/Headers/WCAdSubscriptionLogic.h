//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdConfirmHalfScreenBaseView;
@protocol WCAdSubscriptionLogicDelegate;

@interface WCAdSubscriptionLogic
{
    _Bool _btnHasBeenClicked;
    id <WCAdSubscriptionLogicDelegate> _delegate;
    NSString *_snsId;
    NSString *_adTitle;
    NSString *_adDesc;
    NSString *_adSubmitBtnTitle;
    NSString *_headImage;
    NSString *_nickName;
    WCAdConfirmHalfScreenBaseView *_halfScreenView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool btnHasBeenClicked; // @synthesize btnHasBeenClicked=_btnHasBeenClicked;
@property(retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSString *adSubmitBtnTitle; // @synthesize adSubmitBtnTitle=_adSubmitBtnTitle;
@property(retain, nonatomic) NSString *adDesc; // @synthesize adDesc=_adDesc;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(nonatomic) __weak id <WCAdSubscriptionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasSendSubscription;
- (void)setSubscriptionStateToMMKV;
- (id)fetchSubscriptionStateMMKVKey;
- (_Bool)isSubscriptionInfoAllValid;
- (void)updateHeadInfoWithHeadUrl:(id)arg1 nickname:(id)arg2 title:(id)arg3 adDesc:(id)arg4 adSubmitBtnTitle:(id)arg5;
- (void)updateSubscriptionLogicInfoWith:(id)arg1 dataItem:(id)arg2;
- (void)onConfirmViewDidDisappearWithConfirmInfo:(id)arg1;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)showActionSheet;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorCode:(long long)arg4;
- (_Bool)isStringEmpty:(id)arg1;
- (void)checkParameterAndStart;
- (void)start;
- (id)initWithTitle:(id)arg1 adDesc:(id)arg2 adSubmitBtnTitle:(id)arg3 headImage:(id)arg4 nickName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

