//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayOfflinePayBlockLayer;
@protocol WCPayOfflinePayBlockTipsViewDelegate;

@interface WCPayOfflineBlockTipsView
{
    id <WCPayOfflinePayBlockTipsViewDelegate> _delegate;
    WCPayOfflinePayBlockLayer *_viewData;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) WCPayOfflinePayBlockLayer *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <WCPayOfflinePayBlockTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)confirmBtnClick;
- (void)startCountDownBtn;
- (void)setupContentView;
- (id)initBlockTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

