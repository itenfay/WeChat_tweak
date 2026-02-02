//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, UIButton, UIImageView, UILabel;

@interface NetworkCheckViewController
{
    UIButton *m_cancelBtn;
    UIImageView *m_iconView;
    UILabel *m_statusLabel;
    UILabel *m_detailLabel;
    UIButton *m_confirmBtn;
    MMTimer *m_progressTimer;
    int m_progressCounter;
    int m_progress;
    int m_progressStep;
    unsigned long long m_locationTag;
    _Bool m_connetOK;
    _Bool m_baseNetOK;
    _Bool m_longlinkOK;
    NSString *m_kvString;
}

- (void).cxx_destruct;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onCancelBtnClicked;
- (void)onConfirmBtnClicked;
- (void)updateViewWithStatus:(id)arg1 detail:(id)arg2 hasConfirmBtn:(_Bool)arg3;
- (void)updateForSubmitInfoWithLocation:(id)arg1;
- (void)updateForNetworkFail;
- (void)updateForNetworkOK;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(id)arg4;
- (int)getCheckingProgress;
- (void)updateProgress;
- (void)viewDidLoad;

@end

