//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicBlurCardView, MMMusicMVModel, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImage;

@interface MMMusicPublishViewController
{
    MMWebImageView *m_headImageView;
    MMUILabel *m_nickLabel;
    MMMusicBlurCardView *_blurCardView;
    MMUIButton *_editCoverBtn;
    MMMusicMVModel *_mvModel;
    unsigned long long _fromScene;
    UIImage *_customCoverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *customCoverImage; // @synthesize customCoverImage=_customCoverImage;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onCardClicked;
- (void)showImage:(id)arg1;
- (void)OnDone;
- (void)handleKeepDraftOrCancelFinish;
- (void)OnReturn;
- (void)editCoverOpenAlbum;
- (void)editCoverOpenCamera;
- (void)onTapEditCoverBtn;
- (void)reloadCardDisplay;
- (void)reload:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMvModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

