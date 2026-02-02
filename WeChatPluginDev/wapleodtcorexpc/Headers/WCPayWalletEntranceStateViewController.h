//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QueryWalletEntranceBalanceSwitchResp, UIImageView, UILabel, UISwitch, UIView, WCPayLineSeparatorView, WCPayQueryWalletEntranceBalanceSwitchStateCgi, WCPaySetWalletEntranceBalanceSwitchStateCgi;
@protocol WCPayWalletEntranceStateViewControllerDelegate;

@interface WCPayWalletEntranceStateViewController
{
    id <WCPayWalletEntranceStateViewControllerDelegate> _m_delegate;
    WCPayQueryWalletEntranceBalanceSwitchStateCgi *_m_getStateCgi;
    WCPaySetWalletEntranceBalanceSwitchStateCgi *_m_setStateCgi;
    QueryWalletEntranceBalanceSwitchResp *_m_getStateResponse;
    UIView *_m_headerView;
    UIImageView *_m_icon;
    UILabel *_m_titleLabel;
    WCPayLineSeparatorView *_m_panelView;
    UISwitch *_m_itemSwtich;
}

- (void).cxx_destruct;
@property(retain) UISwitch *m_itemSwtich; // @synthesize m_itemSwtich=_m_itemSwtich;
@property(retain) WCPayLineSeparatorView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain) UIImageView *m_icon; // @synthesize m_icon=_m_icon;
@property(retain) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain) QueryWalletEntranceBalanceSwitchResp *m_getStateResponse; // @synthesize m_getStateResponse=_m_getStateResponse;
@property(retain) WCPaySetWalletEntranceBalanceSwitchStateCgi *m_setStateCgi; // @synthesize m_setStateCgi=_m_setStateCgi;
@property(retain) WCPayQueryWalletEntranceBalanceSwitchStateCgi *m_getStateCgi; // @synthesize m_getStateCgi=_m_getStateCgi;
@property __weak id <WCPayWalletEntranceStateViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiResp:(id)arg1 fromServer:(_Bool)arg2;
- (void)onWCPayQueryWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPaySetWalletEntranceBalanceSwitchStateCgiResp:(id)arg1;
- (void)onClickSwitch;
- (void)updatePanelView;
- (void)updateTitleLabel;
- (void)updateIcon;
- (void)updateView;
- (void)updateData;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setHasClickSwitch:(_Bool)arg1;
- (_Bool)hasClickSwitch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

