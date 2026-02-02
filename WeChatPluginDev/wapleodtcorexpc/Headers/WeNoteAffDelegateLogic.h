//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavFullScreenImageViewController, FavoritesItemDataField, MMPickLocationViewController, NSMutableArray, NSMutableDictionary, NSString, StreamVoiceInputViewController, UIView, WeNoteCPPInstance;
@protocol WeNoteAffLogicDelegate;

@interface WeNoteAffDelegateLogic : NSObject
{
    id <WeNoteAffLogicDelegate> m_delegate;
    unsigned int m_mmassetCount;
    NSMutableArray *m_arrAttachmentDatas;
    MMPickLocationViewController *m_locationVC;
    StreamVoiceInputViewController *m_voiceInputViewController;
    NSString *m_voiceStreamTitle;
    UIView *m_voiceInputTopBar;
    double m_toolViewHeight;
    FavoritesItemDataField *m_recordingData;
    FavFullScreenImageViewController *m_favImageVC;
    NSString *m_curFullScreenImageId;
    struct CGRect m_curImgOriginRect;
    CDUnknownBlockType m_fullScreenImgHideAnimationCompleteHandle;
    NSString *m_curPlayingAudioId;
    NSMutableDictionary *m_attachmentNativeItemDic;
    WeNoteCPPInstance *_cppInstance;
    long long _canTranslateContent;
}

- (void).cxx_destruct;
@property(nonatomic) long long canTranslateContent; // @synthesize canTranslateContent=_canTranslateContent;
@property(retain, nonatomic) WeNoteCPPInstance *cppInstance; // @synthesize cppInstance=_cppInstance;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)doCompleteHandle;
- (_Bool)needAsyncDoAnimationHideDidStopHandle;
- (void)onFullScreenHideAnimationEndWithSimpleImgInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onFullScreenHideAnimationBeginWithSimpleImgInfo:(id)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (_Bool)isVideoNeedLazyDownload:(id)arg1;
- (void)tryToDownloadVideoWith:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (struct CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (void)onCloseMediaDetailsAnimationComplete:(id)arg1;
- (void)setCPPInstance:(id)arg1;
- (void)reportILogs:(int)arg1 reportContent:(id)arg2;
- (void)checkCanTranslateContent:(id)arg1;
- (void)onGeneratedContentFinished:(id)arg1;
- (void)onChangeTranslateLanguage;
- (id)onPasteAttachment:(id)arg1;
- (id)onCopyAttachment:(id)arg1;
- (void)onCopyContent:(id)arg1 sectionWrap:(id)arg2;
- (id)webviewWCPayScene;
- (void)onClickLink:(id)arg1;
- (void)onClickMoreBtn;
- (void)onClickExpose;
- (void)onPauseVoice:(id)arg1;
- (void)onPlayVoice:(id)arg1 progress:(float)arg2;
- (void)onClickFile:(id)arg1;
- (void)onClickLocation:(id)arg1;
- (void)onClickMedia:(id)arg1 index:(int)arg2 needEdit:(_Bool)arg3 originRect:(id)arg4;
- (id)getFavDataWithAttachmentId:(id)arg1;
- (id)getRTEAttachmentNativeItem:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)doVoiceRecordEnd;
- (_Bool)doVoiceRecordBegin;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowseOpeniCloud;
- (void)showFilePickerView:(unsigned int)arg1;
- (void)onReturnSelectedFavDataList:(id)arg1;
- (void)editStreamVoiceTxtReturn;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (id)getVoiceTopBarView;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onSendTextMsg:(id)arg1;
- (double)getInputToolViewHeight;
- (void)requestVoiceInputView;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onCreatPostLocationView;
- (void)onAddImageItemComplete;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (_Bool)isOnRecording:(id)arg1;
- (void)onRecordClick:(_Bool)arg1;
- (void)onSelectFile;
- (void)onSelectFav;
- (_Bool)isUsingVoiceInput;
- (void)closeVoiceInput;
- (void)onVoiceInput;
- (void)onSelectLocation;
- (void)onOpenCamera;
- (void)onSelectPhoto;
- (void)checkToolViewHeightWithComplete:(CDUnknownBlockType)arg1;
- (long long)getCurrentOrientation;
- (int)checkExceedMaxObjectCountAndAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

