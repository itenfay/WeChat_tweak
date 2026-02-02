//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePaymentSettingInputView, MMTableView, MMUIButton, MMUILabel, NSString, OrderedDictionary, UIView;
@protocol MMFinderLivePaymentSettingViewDelegate;

@interface MMFinderLivePaymentSettingView
{
    _Bool _forceDarkMode;
    unsigned int _chargeUnitPriceInWecoin;
    unsigned int _curPriceInWecoin;
    id <MMFinderLivePaymentSettingViewDelegate> _operationDelegate;
    UIView *_contentView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMTableView *_priceInWecoinTableView;
    OrderedDictionary *_priceInWecoinOptions;
    MMFinderLivePaymentSettingInputView *_inputView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMFinderLivePaymentSettingInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) unsigned int curPriceInWecoin; // @synthesize curPriceInWecoin=_curPriceInWecoin;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @synthesize chargeUnitPriceInWecoin=_chargeUnitPriceInWecoin;
@property(retain, nonatomic) OrderedDictionary *priceInWecoinOptions; // @synthesize priceInWecoinOptions=_priceInWecoinOptions;
@property(retain, nonatomic) MMTableView *priceInWecoinTableView; // @synthesize priceInWecoinTableView=_priceInWecoinTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLivePaymentSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)closeAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onInputPriceInWecoin:(unsigned int)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (id)getColorProxy;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)initDefaultData;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithCurPriceInWecoin:(unsigned int)arg1 forceDarkMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

