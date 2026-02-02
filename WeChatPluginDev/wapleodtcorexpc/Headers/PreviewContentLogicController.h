//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSRecursiveLock, NSString, WCPayWebImageView, WCRedEnvelopesGetRedPacketPreviewCgi;
@protocol PreviewContentLogicControllerDelegate;

@interface PreviewContentLogicController
{
    _Bool _hasCallPreviewCgi;
    _Bool _bubbleImageDownloadOK;
    _Bool _recShowImageDownloadOK;
    _Bool _detailImageDownloadOK;
    _Bool _firstStoryImageDownloadOK;
    _Bool _bubbleImageDownloadFail;
    _Bool _recShowImageDownloadFail;
    _Bool _detailImageDownloadFail;
    _Bool _firstStoryImageDownloadFail;
    _Bool _reloadTipsIsShowing;
    _Bool _isLoadingOk;
    id <PreviewContentLogicControllerDelegate> _m_delegate;
    NSMutableArray *_previewContentMsgs;
    WCRedEnvelopesGetRedPacketPreviewCgi *_m_getRedPacketPreviewCgi;
    WCPayWebImageView *_bubbleImageView;
    WCPayWebImageView *_recShowImageView;
    WCPayWebImageView *_detailImageView;
    WCPayWebImageView *_firstStoryImageBgView;
    NSRecursiveLock *_m_lock;
    NSString *_curDownloadCoverId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curDownloadCoverId; // @synthesize curDownloadCoverId=_curDownloadCoverId;
@property(nonatomic) _Bool isLoadingOk; // @synthesize isLoadingOk=_isLoadingOk;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(nonatomic) _Bool reloadTipsIsShowing; // @synthesize reloadTipsIsShowing=_reloadTipsIsShowing;
@property(nonatomic) _Bool firstStoryImageDownloadFail; // @synthesize firstStoryImageDownloadFail=_firstStoryImageDownloadFail;
@property(nonatomic) _Bool detailImageDownloadFail; // @synthesize detailImageDownloadFail=_detailImageDownloadFail;
@property(nonatomic) _Bool recShowImageDownloadFail; // @synthesize recShowImageDownloadFail=_recShowImageDownloadFail;
@property(nonatomic) _Bool bubbleImageDownloadFail; // @synthesize bubbleImageDownloadFail=_bubbleImageDownloadFail;
@property(nonatomic) _Bool firstStoryImageDownloadOK; // @synthesize firstStoryImageDownloadOK=_firstStoryImageDownloadOK;
@property(nonatomic) _Bool detailImageDownloadOK; // @synthesize detailImageDownloadOK=_detailImageDownloadOK;
@property(nonatomic) _Bool recShowImageDownloadOK; // @synthesize recShowImageDownloadOK=_recShowImageDownloadOK;
@property(nonatomic) _Bool bubbleImageDownloadOK; // @synthesize bubbleImageDownloadOK=_bubbleImageDownloadOK;
@property(retain, nonatomic) WCPayWebImageView *firstStoryImageBgView; // @synthesize firstStoryImageBgView=_firstStoryImageBgView;
@property(retain, nonatomic) WCPayWebImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) WCPayWebImageView *recShowImageView; // @synthesize recShowImageView=_recShowImageView;
@property(retain, nonatomic) WCPayWebImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) WCRedEnvelopesGetRedPacketPreviewCgi *m_getRedPacketPreviewCgi; // @synthesize m_getRedPacketPreviewCgi=_m_getRedPacketPreviewCgi;
@property(nonatomic) _Bool hasCallPreviewCgi; // @synthesize hasCallPreviewCgi=_hasCallPreviewCgi;
@property(retain, nonatomic) NSMutableArray *previewContentMsgs; // @synthesize previewContentMsgs=_previewContentMsgs;
@property(nonatomic) __weak id <PreviewContentLogicControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)startAutoOpenTimer;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)checkAllImageStatus;
- (void)showWeakNetworkTips;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)startDownloadResource;
- (void)startDownloadFirstStoryPage:(id)arg1;
- (void)predownloadStoryInfo:(id)arg1;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(id)arg1;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetRightBarButtonImageName;
- (id)onGetRightBarButton;
- (id)GetRightBarBtn;
- (_Bool)isOpenSingleInfo;
- (id)GetRightBarButtonTitle;
- (_Bool)HasCustomToolBar;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)isToolViewHidden;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)setPreviewContentMsg:(id)arg1;
- (id)GetUsrTitle;
- (void)onPreviewContentViewControllerViewDidDisapper;
- (void)onSendGetPreviewCGIWithScene:(unsigned int)arg1 url:(id)arg2 material_id:(id)arg3;
- (void)onPreviewContentViewControllerViewDidAppear;
- (void)setExtraInfo:(id)arg1;
- (void)initViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

