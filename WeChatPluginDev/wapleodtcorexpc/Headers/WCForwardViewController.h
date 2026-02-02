//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSObject, NSString, OpenApiImageCdnUploader, UIView, WCContentItemBaseView, WCDataItem, WCMomentsPageContext;
@protocol WCCommitViewResultDelegate;

@interface WCForwardViewController
{
    WCDataItem *_forwardDataItem;
    UIView *_mediaViewBkgView;
    _Bool _enableEmptyText;
    _Bool _uploadFinished;
    long long _iPostSource;
    NSString *_preSourceId;
    NSObject *_userData;
    NSString *_extensionKey;
    id <WCCommitViewResultDelegate> _resultDelegate;
    NSData *_hdImageAlbumData;
    OpenApiImageCdnUploader *_uploader;
    WCContentItemBaseView *_mediaCellView;
    WCMomentsPageContext *_pageContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) WCContentItemBaseView *mediaCellView; // @synthesize mediaCellView=_mediaCellView;
@property(nonatomic) _Bool uploadFinished; // @synthesize uploadFinished=_uploadFinished;
@property(retain, nonatomic) OpenApiImageCdnUploader *uploader; // @synthesize uploader=_uploader;
@property(nonatomic) _Bool enableEmptyText; // @synthesize enableEmptyText=_enableEmptyText;
@property(retain, nonatomic) NSData *hdImageAlbumData; // @synthesize hdImageAlbumData=_hdImageAlbumData;
@property(nonatomic) __weak id <WCCommitViewResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) NSString *extensionKey; // @synthesize extensionKey=_extensionKey;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *preSourceId; // @synthesize preSourceId=_preSourceId;
@property(nonatomic) long long iPostSource; // @synthesize iPostSource=_iPostSource;
- (void)printSpringInfoWithDataItem:(id)arg1;
- (id)liveShareViewViewWithTid:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (id)getFinderLiveDismissTarget;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
- (long long)mediaCountForMediaList:(id)arg1;
- (void)postReportSessionWillFinish;
- (void)postReportSessionWillFinishWithUploadTask:(id)arg1;
- (void)postReportSessionWillStart;
- (long long)postReportSessionEntrance;
- (id)postReportSession;
- (void)bind3rdShareReporterIfNeeed:(id)arg1;
- (void)onForwardDataItemUploaded:(id)arg1;
- (void)prepareDataForMiaoJianAppIfNeeded;
- (void)didCancelCommiting;
- (void)didFinishCommiting;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)setupEnhanceDraftSaveController;
- (void)showLoadingView;
- (void)tryUploadMVImageData:(id)arg1;
- (void)sendToTimeLine:(id)arg1;
- (void)OnDone;
- (void)OnReturn;
- (void)dealloc;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)reloadMediaViewBkgView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadHeadViewSubviewsY;
- (void)reloadType;
- (void)reloadData;
- (void)reloadShareButtons;
- (void)_addMediaViewAsNormal;
- (void)addMediaView;
- (void)initTextViewContent;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1 sessionID:(id)arg2;
- (id)initWithDataItem:(id)arg1 uniqueExtensionKey:(id)arg2;
- (id)initWithDataItem:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

