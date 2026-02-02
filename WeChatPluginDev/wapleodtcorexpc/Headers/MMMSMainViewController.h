//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIScrollView, UISwitch, UIView;

@interface MMMSMainViewController
{
    UIImageView *m_imgvRecover;
    UILabel *m_tipLabel;
    UIView *m_roundView;
    UILabel *m_checklabel;
    UISwitch *m_checkSitchView;
    UIButton *m_btnUpload;
    UILabel *m_warningLabel;
    UIScrollView *m_mainScrollView;
}

- (void).cxx_destruct;
- (void)onUpload;
- (void)onSwitchValueChange:(id)arg1;
- (void)makeTipLabelWithText:(id)arg1;
- (void)makeIconView;
- (void)makeScrollView;
- (void)makeInitView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

