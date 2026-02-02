//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, UIButton, UIImageView;
@protocol WCPayOfflinePayInvalidCheckTipsViewDelegate;

@interface WCPayOfflinePayInvalidCheckTipsView
{
    _Bool _bIsInitFromScreenCapturing;
    id <WCPayOfflinePayInvalidCheckTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    RichTextView *_richTextView;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsInitFromScreenCapturing; // @synthesize bIsInitFromScreenCapturing=_bIsInitFromScreenCapturing;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCPayOfflinePayInvalidCheckTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)confirmBtnPress:(id)arg1;
- (void)setupContentView;
- (id)initInvalidTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

