//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSData, NSString, OpenApiImageCdnUploader, OpenApiParameter, ShareFavoritesConfirmLogicHelper, UINavigationController;

@interface SendAppMsgToFavoritesHandler
{
    OpenApiParameter *_parameter;
    ShareFavoritesConfirmLogicHelper *_shareHelper;
    _Bool _canReturnRightShareResult;
    UINavigationController *_m_navigationController;
    MMTipsViewController *_tipsViewController;
    NSData *_hdSongAlbumData;
    OpenApiImageCdnUploader *_uploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenApiImageCdnUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) NSData *hdSongAlbumData; // @synthesize hdSongAlbumData=_hdSongAlbumData;
@property(retain, nonatomic) MMTipsViewController *tipsViewController; // @synthesize tipsViewController=_tipsViewController;
@property(nonatomic) _Bool canReturnRightShareResult; // @synthesize canReturnRightShareResult=_canReturnRightShareResult;
@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void)reportShareResult:(int)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showAlertView;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidRedirect:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)removeFavSourcePathFileWithDataList:(id)arg1;
- (void)OnShareFavoritesItemCancel:(id)arg1;
- (void)OnShareFavoritesItemFail:(id)arg1 WithError:(int)arg2;
- (void)OnShareFavoritesItemOK:(id)arg1;
- (_Bool)ShouldInterceptShareFavoritesItemBeforeConfirm:(id)arg1;
- (void)sendFavoritesWithComunicateData:(id)arg1;
- (id)sendFavoritesFileWithComunicateData:(id)arg1;
- (id)sendFavoritesFeedWithComunicateData:(id)arg1;
- (id)sendFavoritesVideoWithComunicateData:(id)arg1;
- (id)sendFavoritesMusicWithComunicateData:(id)arg1;
- (id)sendFavoritesPhotoWithComunicateData:(id)arg1;
- (id)sendFavoritesTextWithComunicateData:(id)arg1;
- (void)saveData:(id)arg1 ToFile:(id)arg2;
- (void)removeConfirmView;
- (void)launchAppAndSendRespWithErrCode:(int)arg1;
- (void)clearAllHandleAndReturn3rdApp:(_Bool)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsgToFavorites;
- (void)sendAppMsgToFavorites:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

