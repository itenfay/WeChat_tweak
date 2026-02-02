//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveShareLiveQRCodeInfo, ForwardMessageLogicController, MMFinderLiveGenericQrCodeView, MMFinderLiveNoticePosterModel, MMFinderLiveTaskId, MMLiveVerticalTextButtonView, MMScrollActionSheet, MMUIButton, NSString, UIView, WCFinderContact, WCForwardViewController;

@interface MMFinderLiveGenericQrCodeViewController
{
    WCFinderContact *_anchorContact;
    MMFinderLiveTaskId *_taskId;
    FinderLiveShareLiveQRCodeInfo *_qrCodeInfo;
    MMFinderLiveNoticePosterModel *_posterModel;
    NSString *_selectedStyleId;
    unsigned long long _state;
    UIView *_editorLandingStateCommandsContainer;
    MMLiveVerticalTextButtonView *_editorEnterEditingButton;
    MMLiveVerticalTextButtonView *_editorSaveImageButton;
    MMLiveVerticalTextButtonView *_editorShareButton;
    UIView *_editingStateCommandsContainer;
    MMUIButton *_editingCommitButton;
    MMUIButton *_editingAdvanceStyleButton;
    MMFinderLiveGenericQrCodeView *_qrCodeView;
    MMScrollActionSheet *_shareActionSheet;
    ForwardMessageLogicController *_forwardLogic;
    WCForwardViewController *_forwardVc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCForwardViewController *forwardVc; // @synthesize forwardVc=_forwardVc;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) MMFinderLiveGenericQrCodeView *qrCodeView; // @synthesize qrCodeView=_qrCodeView;
@property(retain, nonatomic) MMUIButton *editingAdvanceStyleButton; // @synthesize editingAdvanceStyleButton=_editingAdvanceStyleButton;
@property(retain, nonatomic) MMUIButton *editingCommitButton; // @synthesize editingCommitButton=_editingCommitButton;
@property(retain, nonatomic) UIView *editingStateCommandsContainer; // @synthesize editingStateCommandsContainer=_editingStateCommandsContainer;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorShareButton; // @synthesize editorShareButton=_editorShareButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorSaveImageButton; // @synthesize editorSaveImageButton=_editorSaveImageButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *editorEnterEditingButton; // @synthesize editorEnterEditingButton=_editorEnterEditingButton;
@property(retain, nonatomic) UIView *editorLandingStateCommandsContainer; // @synthesize editorLandingStateCommandsContainer=_editorLandingStateCommandsContainer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *selectedStyleId; // @synthesize selectedStyleId=_selectedStyleId;
@property(retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel; // @synthesize posterModel=_posterModel;
@property(retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo; // @synthesize qrCodeInfo=_qrCodeInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
- (void)reportAnchorShareAction;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)revertPosterChangesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)commitPosterChangesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addToFavorites;
- (void)shareToMoment;
- (void)shareToChat:(id)arg1;
- (void)initializeShareActionSheet;
- (void)initializeComponents;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)arg1;
- (void)onBackButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onShareButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)createQrCodeView;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)arg1 contact:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)liveTask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

