//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CUsrInfo, NSString, UIImage, UIViewController;
@protocol settingMyAccountExtInfoLogicDelegate;

@interface SettingMyAccountExtInfoLogic
{
    id <settingMyAccountExtInfoLogicDelegate> m_delegate;
    UIViewController *m_viewController;
    CUsrInfo *m_usrInfo;
    unsigned int m_uiUploadHeadEventID;
    UIImage *_lastImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUsrInfo *m_usrInfo; // @synthesize m_usrInfo;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)dismissPhotoPicker;
- (void)dealloc;
- (void)reload;
- (void)resetViewControllerAndDelegate;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)saveLastImage;
- (id)loadLastImage;
- (id)lastImagePath;
- (void)showChangeImg:(id)arg1;
- (void)onSelectLastImage:(id)arg1;
- (void)onPhotoLast;
- (void)onPhotoSave;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)handleImage:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (id)getNavigationController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

