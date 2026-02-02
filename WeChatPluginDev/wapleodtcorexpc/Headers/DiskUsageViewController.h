//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFolder, MMUIActivityIndicatorView, NSString, UIButton;

@interface DiskUsageViewController
{
    _Bool _bPro;
    _Bool _isChecking;
    NSString *_rootPath;
    UIButton *_btnAnalyze;
    UIButton *_btnMail;
    UIButton *_btnDelete;
    MMUIActivityIndicatorView *_m_actView;
    MMFolder *_gFolder;
}

- (void).cxx_destruct;
@property(retain) MMFolder *gFolder; // @synthesize gFolder=_gFolder;
@property _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_actView; // @synthesize m_actView=_m_actView;
@property(retain, nonatomic) UIButton *btnDelete; // @synthesize btnDelete=_btnDelete;
@property(retain, nonatomic) UIButton *btnMail; // @synthesize btnMail=_btnMail;
@property(retain, nonatomic) UIButton *btnAnalyze; // @synthesize btnAnalyze=_btnAnalyze;
@property(copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(nonatomic) _Bool bPro; // @synthesize bPro=_bPro;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)onMail;
- (void)writeMailWithAttachFile:(id)arg1 filePath:(id)arg2 zipName:(id)arg3 zipPath:(id)arg4;
- (id)mimeOfFile:(id)arg1;
- (void)wechatToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onForwarResult;
- (void)OnDiskUsage;
- (void)OnReAnalyze;
- (void)OnShowDetail;
- (void)viewDidLoad;
- (void)OnFinish;
- (void)initView;
- (id)getDataPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

