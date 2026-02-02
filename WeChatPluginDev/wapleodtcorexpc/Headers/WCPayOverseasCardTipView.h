//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, UIButton, UIImageView;
@protocol WCPayOverseasCarTipDelegate;

@interface WCPayOverseasCardTipView
{
    UIImageView *_backgroundView;
    UIButton *_selectBtn;
    UIButton *_cancelButton;
    MMWebViewController *_webView;
    id <WCPayOverseasCarTipDelegate> m_tipViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOverseasCarTipDelegate> m_tipViewDelegate; // @synthesize m_tipViewDelegate;
- (id)genBackgroundView;
- (void)initBottomView;
- (void)initTextView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onConfirm;
- (void)onCancel;
- (void)webViewReturn:(id)arg1;
- (void)onSelect;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

