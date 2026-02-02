//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditStoryImageAttr, NSString, WCStoryPublishReportObj;

@interface WCMyStoryCameraMgr
{
    WCStoryPublishReportObj *_publishReportObj;
    unsigned long long _enterScene;
    EditStoryImageAttr *_storyAttr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditStoryImageAttr *storyAttr; // @synthesize storyAttr=_storyAttr;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WCStoryPublishReportObj *publishReportObj; // @synthesize publishReportObj=_publishReportObj;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)createPhotoMovieWithPicker:(id)arg1 selectImageArray:(id)arg2 selectedImageMd5s:(id)arg3;
- (id)genDataItemWithSightDraftItem:(id)arg1 thumbPath:(id)arg2 originImageMd5:(id)arg3;
- (void)postNewItemForSight:(id)arg1 originImageMd5:(id)arg2;
- (void)postNewItemForSight:(id)arg1;
- (void)sendTakePhotoNotification;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightCameraClickRecordBtn;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (void)showImagePicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

