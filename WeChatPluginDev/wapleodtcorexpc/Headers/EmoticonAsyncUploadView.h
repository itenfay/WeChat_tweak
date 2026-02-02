//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIImageView, UIView;

@interface EmoticonAsyncUploadView
{
    unsigned long long _m_uploadStatus;
    UIView *_m_maskView;
    UIImageView *_m_uploadFailedView;
    MMUIActivityIndicatorView *_m_activityIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicator; // @synthesize m_activityIndicator=_m_activityIndicator;
@property(retain, nonatomic) UIImageView *m_uploadFailedView; // @synthesize m_uploadFailedView=_m_uploadFailedView;
@property(retain, nonatomic) UIView *m_maskView; // @synthesize m_maskView=_m_maskView;
@property(nonatomic) unsigned long long m_uploadStatus; // @synthesize m_uploadStatus=_m_uploadStatus;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)onAddBackupEmoticonPendingUpload:(id)arg1;
- (void)hideFocusView;
- (void)showFocusView;
- (void)hidePreview;
- (void)showPreview;
- (void)changeWrap:(id)arg1 needShowDesc:(_Bool)arg2;
- (void)setUploadStatus:(unsigned long long)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 EmoticonWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

