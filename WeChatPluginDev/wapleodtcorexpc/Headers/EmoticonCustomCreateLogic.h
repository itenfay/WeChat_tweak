//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonCreateImageUploadTask, EmoticonCreateUploadTask, EmoticonCreateVideoUploadTask, EmoticonCustomAddingItem, EmoticonCustomCreateDownloadTask, EmoticonCustomCreateEditTask, EmoticonCustomCreatePreProcessTask, EmoticonCustomCreateTask, EmoticonCustomManageSelectFromMultiImageViewController, MMUIViewController, NSString, UINavigationController, WCFinderDataItem;
@protocol MMUIViewControllerDelegate;

@interface EmoticonCustomCreateLogic : NSObject
{
    _Bool _isEditing;
    _Bool _isMultiImage;
    id <MMUIViewControllerDelegate> _delegate;
    EmoticonCustomCreateTask *_currentTask;
    EmoticonCustomAddingItem *_currentAddingItem;
    UINavigationController *_pickerNavController;
    EmoticonCustomCreateDownloadTask *_downloadingTask;
    EmoticonCustomCreateEditTask *_editTask;
    EmoticonCreateUploadTask *_uploadTask;
    WCFinderDataItem *_selectingDataItem;
    MMUIViewController *_editorVC;
    EmoticonCustomManageSelectFromMultiImageViewController *_multiImageVC;
    EmoticonCustomCreatePreProcessTask *_preprocessTask;
    CDStruct_1b6d18a9 _videoCropStartTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomCreatePreProcessTask *preprocessTask; // @synthesize preprocessTask=_preprocessTask;
@property(nonatomic) _Bool isMultiImage; // @synthesize isMultiImage=_isMultiImage;
@property(nonatomic) CDStruct_1b6d18a9 videoCropStartTime; // @synthesize videoCropStartTime=_videoCropStartTime;
@property(nonatomic) __weak EmoticonCustomManageSelectFromMultiImageViewController *multiImageVC; // @synthesize multiImageVC=_multiImageVC;
@property(nonatomic) __weak MMUIViewController *editorVC; // @synthesize editorVC=_editorVC;
@property(retain, nonatomic) WCFinderDataItem *selectingDataItem; // @synthesize selectingDataItem=_selectingDataItem;
@property(retain, nonatomic) EmoticonCreateUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(retain, nonatomic) EmoticonCustomCreateEditTask *editTask; // @synthesize editTask=_editTask;
@property(retain, nonatomic) EmoticonCustomCreateDownloadTask *downloadingTask; // @synthesize downloadingTask=_downloadingTask;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak UINavigationController *pickerNavController; // @synthesize pickerNavController=_pickerNavController;
@property(retain, nonatomic) EmoticonCustomAddingItem *currentAddingItem; // @synthesize currentAddingItem=_currentAddingItem;
@property(retain, nonatomic) EmoticonCustomCreateTask *currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getViewController;
- (id)getTopViewControllerIncludingNav;
- (id)getTopViewController;
- (void)handleLoadingOnTopVC:(id)arg1 isStart:(_Bool)arg2;
- (void)onEmoticonCreateCommonFail;
- (id)rootVC;
- (void)reInit;
- (void)startLogicFromPicker;
- (void)startLogicFromTask:(id)arg1;
- (void)startLogic;
- (void)tryCloseEditorVC:(_Bool)arg1;
- (void)handleGIFInfo:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditVideo:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)directFinderStartUploadWithVideoPath:(id)arg1;
- (void)openEditorWithVideoPath:(id)arg1;
- (void)preprocessIfNeededWithVideoPath:(id)arg1;
- (void)startLogicDirectFromFeedId;
- (void)onMultiImageDidCancel;
- (void)onMultiImageStartDownload;
- (void)onMultiImageGetImageDataFailed;
- (void)onMultiImageSelectImageData:(id)arg1;
- (void)closeImageEditor:(id)arg1;
- (void)closeVideoEditor:(id)arg1;
- (void)MMVideoPickerManager:(id)arg1 didFinishSelectingFinderDataItem:(id)arg2;
- (void)openMultiImageSelectEditor:(id)arg1;
- (void)openImageEditorWithTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openImageEditorWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openImageEditorWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUploadWithVideoPath:(id)arg1;
- (void)openVideoEditorWithFilePath:(id)arg1 ThumbImageUrl:(id)arg2;
- (void)startDownloadVideo:(id)arg1;
- (void)startDownloadImage:(id)arg1;
- (void)handleSelectedDataItem:(id)arg1;
- (void)appendAdditionalInfoToItem:(id)arg1;
- (_Bool)isFinderCreateEnabled;
- (id)downloadingImageTask;
- (id)downloadingVideoTask;
- (_Bool)interruptImageDownloadTask:(id)arg1;
- (void)startImageDownloadTask:(id)arg1;
- (_Bool)interruptVideoDownloadTask:(id)arg1;
- (void)startVideoDownloadTask:(id)arg1;
- (void)onGetEditedVideoCropStartTime:(CDStruct_1b6d18a9)arg1;
- (void)onGetEditorVC:(id)arg1;
- (struct CGSize)editorContainerViewSize;
- (struct CGSize)getDownloadingVideoSize;
- (void)startImageEdit:(id)arg1;
- (void)startVideoEdit:(id)arg1;
- (void)preprocessWithTask:(id)arg1;
@property(readonly, nonatomic) EmoticonCreateVideoUploadTask *uploadVideoTask;
@property(readonly, nonatomic) EmoticonCreateImageUploadTask *uploadImageTask;
- (void)openResultVCWith:(id)arg1 isExceedLimit:(_Bool)arg2;
- (void)AddEmoticonUploadedButExceedLimitWithWrap:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (_Bool)handleAddingItemAndShouldContinueUploading:(id)arg1;
- (id)addlogicDelegate;
- (id)getPresetAddingItem;
- (void)startImageUploadTask:(id)arg1;
- (void)startVideoUploadTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

