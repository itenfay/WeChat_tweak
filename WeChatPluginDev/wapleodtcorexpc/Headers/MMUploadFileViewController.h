//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDeleteFileModel, MMLoadingView, MMProgressView, NSArray, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface MMUploadFileViewController
{
    NSArray *_uploadFileNames;
    NSString *_attachDataName;
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    UIImageView *m_recoverView;
    UILabel *m_noneFile;
    UILabel *m_tips;
    UILabel *m_uploadFileName;
    UIButton *m_uploadBtn;
    UILabel *m_warningLabel;
    UITapGestureRecognizer *_tap;
    unsigned long long m_scene;
    MMDeleteFileModel *m_model;
    NSString *m_zipPath;
    _Bool _isUploading;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)downloadPackage:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)didTap;
- (void)removeZipFile;
- (void)UploadSuccess;
- (void)UploadFail;
- (void)OnResponse:(id)arg1;
- (void)onFinish;
- (void)setUploadSuc;
- (void)setUploadFail;
- (void)setProgress:(id)arg1;
- (void)hiddenUpView;
- (void)clearFile;
- (void)sendMail:(id)arg1 andRtxName:(id)arg2;
- (void)onBtnClick:(id)arg1;
- (void)adjustTableViewRect;
- (void)initView;
- (void)layoutSubViews;
- (_Bool)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1;

@end

