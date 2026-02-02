//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicLiveCGIMgr, MMMusicMVClipUploader, MMMusicPostingMVContext, NSMutableArray, NSString, UIImage, UIViewController, WCFinderCreateCoordinator;

@interface MMMusicMVPostDataService
{
    _Bool _saveAsDraft;
    _Bool _isDraftEditingMode;
    MMMusicPostingMVContext *_currentContext;
    UIImage *_customCoverImage;
    NSMutableArray *_pendingContext;
    NSMutableArray *_localDraftModels;
    MMMusicMVClipUploader *_clipUploader;
    MMMusicLiveCGIMgr *_cgiMgr;
    UIViewController *_currentVC;
    WCFinderCreateCoordinator *_userCreator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *userCreator; // @synthesize userCreator=_userCreator;
@property(nonatomic) _Bool isDraftEditingMode; // @synthesize isDraftEditingMode=_isDraftEditingMode;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) _Bool saveAsDraft; // @synthesize saveAsDraft=_saveAsDraft;
@property(retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr; // @synthesize cgiMgr=_cgiMgr;
@property(retain, nonatomic) MMMusicMVClipUploader *clipUploader; // @synthesize clipUploader=_clipUploader;
@property(retain, nonatomic) NSMutableArray *localDraftModels; // @synthesize localDraftModels=_localDraftModels;
@property(retain, nonatomic) NSMutableArray *pendingContext; // @synthesize pendingContext=_pendingContext;
@property(retain, nonatomic) UIImage *customCoverImage; // @synthesize customCoverImage=_customCoverImage;
@property(retain, nonatomic) MMMusicPostingMVContext *currentContext; // @synthesize currentContext=_currentContext;
- (void)onMusicMVCGISerivcePostMVFailed:(id)arg1;
- (void)onMusicMVCGISerivcePostMVSuccess:(id)arg1;
- (void)onClipUploadFailWithClipId:(id)arg1;
- (void)onClipUploadSuccessWithClipId:(id)arg1 finderDataItem:(id)arg2;
- (void)fillFeatureListWithFinderDataItem:(id)arg1 trackItem:(id)arg2;
- (void)updateFeatureListForMVModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)findContextContaisUploadingClipWithId:(id)arg1;
- (void)syncDraftToMMKV;
- (void)syncLocalModelToMMKV;
- (void)deletePostingContext:(id)arg1;
- (void)postLocalPic:(id)arg1;
- (void)postLocalVideo:(id)arg1;
- (void)postMVIfReady:(id)arg1;
- (void)postPendingContext;
- (void)handleClipFailWithVideoLocalId:(id)arg1;
- (_Bool)deleteDraftWithLocalId:(id)arg1 needNotify:(_Bool)arg2;
- (void)deleteAllDraft;
- (id)getDraftMVFinderItemList;
- (_Bool)deleteLocalMVModelWithLocalId:(id)arg1;
- (_Bool)tryPostLocalMVModelWithLocalId:(id)arg1;
- (id)getLocalMVFinderItem:(id)arg1;
- (id)getLocalMVFinderItemList;
- (id)getLocalMVModelWithLocalId:(id)arg1;
- (void)addVideoForTrackAt:(unsigned long long)arg1 localVideoPath:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (void)addVideoForTrackAt:(unsigned long long)arg1 withFinderVideo:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (void)discardPostingContext;
- (id)commitPostingContext:(_Bool)arg1 customCover:(id)arg2;
- (void)createPostingContextWithBaseMVModel:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)reportFinderPostWithPostState:(unsigned long long)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (id)realCommitCreation:(_Bool)arg1;
- (id)commitCreationAsDraft:(_Bool)arg1;
- (id)commitCreationInViewController:(id)arg1 customCover:(id)arg2;
- (void)cancelPublishingInViewController:(id)arg1 keepDraftCompletion:(CDUnknownBlockType)arg2 notKeepDraftCompletion:(CDUnknownBlockType)arg3;
- (void)cancelPublishingInViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

