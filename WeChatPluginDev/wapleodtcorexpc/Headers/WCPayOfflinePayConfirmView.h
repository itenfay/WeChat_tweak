//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOfflinePayConfirmViewDelegate;

@interface WCPayOfflinePayConfirmView
{
    UIImageView *m_backgroundView;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    id m_userData;
    id <WCPayOfflinePayConfirmViewDelegate> m_delegate;
    unsigned char _routeInfo;
}

- (void).cxx_destruct;
@property unsigned char routeInfo; // @synthesize routeInfo=_routeInfo;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)onCancelBtnClick;
- (void)onPayBtnClick;
- (void)closeView;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

