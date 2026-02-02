//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAliasInfo, MMWebImageView, NSString, UIButton, UILabel, UITextField, UIView;

@interface WCFinderTrumpetEditorViewController
{
    _Bool _hideTakePhotoAction;
    FinderLiveAliasInfo *_aliasInfo;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_certainButton;
    UITextField *_nickNameTextField;
    MMWebImageView *_headerImageView;
    NSString *_headerImageURL;
    UIView *_lastLineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lastLineView; // @synthesize lastLineView=_lastLineView;
@property(copy, nonatomic) NSString *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(nonatomic) __weak MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak UITextField *nickNameTextField; // @synthesize nickNameTextField=_nickNameTextField;
@property(nonatomic) __weak UIButton *certainButton; // @synthesize certainButton=_certainButton;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hideTakePhotoAction; // @synthesize hideTakePhotoAction=_hideTakePhotoAction;
@property(retain, nonatomic) FinderLiveAliasInfo *aliasInfo; // @synthesize aliasInfo=_aliasInfo;
- (void)registerYReportSdk;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)clickDoneAction;
- (void)textFieldDone:(id)arg1;
- (void)textFieldChange:(id)arg1;
- (void)clickNickNameAction;
- (void)clickHeader;
- (id)createLineView;
- (void)setUpUI;
- (void)listenKeyBoard;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

