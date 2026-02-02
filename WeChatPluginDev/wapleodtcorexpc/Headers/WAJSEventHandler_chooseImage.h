//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_chooseImage
{
    unsigned int m_imgCnt;
    long long m_sizeType;
    long long m_sourceType;
    _Bool _frontCamera;
    _Bool _userDidSelect;
    unsigned long long _failedCount;
}

@property(nonatomic) _Bool userDidSelect; // @synthesize userDidSelect=_userDidSelect;
@property(nonatomic) unsigned long long failedCount; // @synthesize failedCount=_failedCount;
- (void)delayNotifyWeb:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)processImages:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (long long)getImagePickerSizeType:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)asyncHandleCancel;
- (void)handleJSEvent:(id)arg1;
- (void)showCamera;
- (void)showAlbum;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

