//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MailAttachment, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UINavigationController, UIView;
@protocol MailAttachmentControlViewDelegate;

@interface MailAttachmentControlView
{
    NSMutableArray *m_arrAttachmentViews;
    UILabel *m_labelCol;
    UIImageView *m_imgvAttach;
    UILabel *m_labTip;
    UIButton *m_blueButton;
    UIView *m_grayLineView;
    id <MailAttachmentControlViewDelegate> m_delegate;
    unsigned int m_uiImageAttachIndex;
    unsigned int m_uiVideoAttachIndex;
    unsigned int m_uiFileAttachIndex;
    NSMutableArray *m_attachmentToUpload;
    unsigned int m_assetCount;
    UINavigationController *m_picker;
    MailAttachment *m_lastAttachment;
    CDUnknownBlockType _assetSelectedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock=_assetSelectedBlock;
@property(retain, nonatomic) MailAttachment *m_lastAttachment; // @synthesize m_lastAttachment;
@property(nonatomic) __weak id <MailAttachmentControlViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onFileBrowser:(id)arg1 assetPickerController:(id)arg2 clickAssetInfo:(id)arg3;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)addAttachmentsWithFileInfos:(vector_3510895a)arg1;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (_Bool)onFileBrowseWillSelectFile:(id)arg1 selected:(id)arg2;
- (void)OnDeleteAttachment:(id)arg1;
- (void)doDeleteAttachment:(unsigned int)arg1;
- (void)addAttachmentView:(id)arg1;
- (void)handleUploadData:(id)arg1 name:(id)arg2;
- (void)dismissPickerViewController;
- (void)onAddAttachmentItemComplete;
- (void)addToUploadAttachment:(id)arg1 withNameSuffix:(id)arg2 fileName:(id)arg3;
- (void)addToUploadAttachment:(id)arg1 withNameSuffix:(id)arg2;
- (id)getNewAttachmentNameWithNameSuffix:(id)arg1 fileName:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)openFileBrowser;
- (void)selectFromAlbum;
- (void)takePhoto;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onButtonClicked:(id)arg1;
- (double)getContentTotalHeight;
- (void)initView;
- (id)initWithStoredAttachments:(id)arg1;
- (id)init;
- (void)properInit;
- (unsigned long long)totalSize;
- (unsigned long long)count;
- (id)allToStoreFiles;
- (id)allUploadedFiles;
- (_Bool)containsAttachmentWithFilename:(id)arg1;
- (_Bool)isAllUploadSuccess;
- (void)updateViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

