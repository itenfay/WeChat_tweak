//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCoinConsumePanelDetailView, WCCoinConsumeParameter;
@protocol WCCoinConsumePanelDelegate;

@interface WCCoinConsumePanel
{
    id <WCCoinConsumePanelDelegate> _delegate;
    WCCoinConsumeParameter *_parameter;
    long long _wecoinBalance;
    WCCoinConsumePanelDetailView *_panelDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoinConsumePanelDetailView *panelDetailView; // @synthesize panelDetailView=_panelDetailView;
@property(nonatomic) long long wecoinBalance; // @synthesize wecoinBalance=_wecoinBalance;
@property(retain, nonatomic) WCCoinConsumeParameter *parameter; // @synthesize parameter=_parameter;
@property(nonatomic) __weak id <WCCoinConsumePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(_Bool)arg1;
- (_Bool)enoughCoin;
- (void)clickBalanceButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

@end

