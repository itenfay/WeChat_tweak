//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPickLocationViewController, NSMutableArray, NSString, RTEAttributeNode;
@protocol WNRTEToolViewHelperDelegate;

@interface WNRTEToolViewHelper : NSObject
{
    unsigned int _mmassetCount;
    id <WNRTEToolViewHelperDelegate> _delegate;
    NSMutableArray *_arrAttachments;
    MMPickLocationViewController *_locationViewCtrl;
    RTEAttributeNode *_recordingAttribute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTEAttributeNode *recordingAttribute; // @synthesize recordingAttribute=_recordingAttribute;
@property(retain, nonatomic) MMPickLocationViewController *locationViewCtrl; // @synthesize locationViewCtrl=_locationViewCtrl;
@property(retain, nonatomic) NSMutableArray *arrAttachments; // @synthesize arrAttachments=_arrAttachments;
@property(nonatomic) unsigned int mmassetCount; // @synthesize mmassetCount=_mmassetCount;
@property(nonatomic) __weak id <WNRTEToolViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)insertSeperateLine;
- (void)onVoiceRecordEnd;
- (void)onVoiceRecordRealBegin;
- (_Bool)onVoiceRecordBegin;
- (void)onCancelSeletctedLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onCreatPostLocationView;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onFileBrowseOpeniCloud;
- (void)showFilePickerView:(unsigned int)arg1;
- (void)onAddImageItemComplete;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onTakePhotoForPost;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

