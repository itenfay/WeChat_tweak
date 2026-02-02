//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ChatBackgroundEntranceViewController
{
    NSString *m_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
- (void)applyBackgroundImgToAllScene;
- (void)goDefaultChatBackgroundPickViewController;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePickerWithTakePhoto;
- (void)showImagePickerWithAlbum;
- (void)onFinishedSelectImage:(id)arg1 fromSource:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertButtonConfirm;
- (void)popToMessageSessionView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

