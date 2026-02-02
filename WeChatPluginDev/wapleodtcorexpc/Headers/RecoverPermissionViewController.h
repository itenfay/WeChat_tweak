//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMActivityIndicator, UIButton, UILabel;

@interface RecoverPermissionViewController
{
    int m_percent;
    MMActivityIndicator *m_loadingView;
    UILabel *m_loadingTip;
    UIButton *m_goBackButton;
}

- (void).cxx_destruct;
- (void)onGoBackButtonClicked:(id)arg1;
- (void)resetProtectionOnFile:(const char *)arg1;
- (void)resetProtectionOnPath:(const char *)arg1;
- (void)updateProgress:(unsigned int)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

