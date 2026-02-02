//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MsgDataSaveLogic, MsgFastBrowseView, MsgNewImgDataLogic, MultiSelectController, NSArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIView;
@protocol MsgImgPickerViewControllerDelegate;

@interface MsgImgPickerViewController
{
    MsgFastBrowseView *m_msgFastBrowseView;
    UIView *m_filterFooterView;
    UIButton *m_previewButton;
    UIButton *m_confirmButton;
    MultiSelectController *m_multiSelectController;
    MsgNewImgDataLogic *m_newDataLogic;
    MsgDataSaveLogic *m_MsgDataSaveLogic;
    _Bool m_bHasLoadData;
    NSMutableSet *m_arrMsgExpired;
    NSMutableDictionary *m_dicEditeImage;
    _Bool _previewOriginSelectedImageOnly;
    NSString *m_nsChatName;
    unsigned long long m_eFilterType;
    id <MsgImgPickerViewControllerDelegate> _delegate;
    long long _maxSelectCount;
    NSArray *_selectedImages;
    NSArray *_originSelectedImgs;
    CDUnknownBlockType _downloadCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(retain, nonatomic) NSArray *originSelectedImgs; // @synthesize originSelectedImgs=_originSelectedImgs;
@property(nonatomic) _Bool previewOriginSelectedImageOnly; // @synthesize previewOriginSelectedImageOnly=_previewOriginSelectedImageOnly;
@property(retain, nonatomic) NSArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(nonatomic) long long maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
@property(nonatomic) __weak id <MsgImgPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long m_eFilterType; // @synthesize m_eFilterType;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onSquareImgUpdate:(id)arg1 withInfo:(id)arg2;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (id)expiredMsgForMsgFastBrowseView:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)onForwardMessageOK;
- (void)onMultiOprationComplete;
- (id)getCurrentViewController;
- (id)getEditeImageForMsgInfo:(id)arg1;
- (void)updateEditeMsgImg:(id)arg1 editeReusltImage:(id)arg2;
- (id)selectedMsgInfosForPreview;
- (long long)previewIndexForMsgInfo:(id)arg1;
- (id)msgInfoAtIndex:(long long)arg1;
- (id)simpleMsgArrayForPreview;
- (_Bool)hasSelectedImageAtIndex:(long long)arg1;
- (id)imageAtIndex:(long long)arg1;
- (long long)selectedImageCount;
- (long long)totalImageCount;
- (struct CGRect)msgImgViewFrameGlobal:(id)arg1;
- (void)msgImgPickerPreviewViewControllerDidConfirmSelection;
- (void)msgImgPickerPreviewViewControllerDidChangeSelectionForImageAtIndex:(long long)arg1;
- (void)updateSelectedImages;
- (void)realConfirmSelection;
- (void)realPreviewSelectedImageWithPreviewSelectedOnly:(_Bool)arg1 startIndex:(long long)arg2;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (void)startDownload;
- (void)downloadSelectedImageIfNeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)onConfirmSelection:(id)arg1;
- (void)onPreviewSelectedImage:(id)arg1;
- (void)onCancel;
- (void)viewDidTransitionToNewSize;
- (void)initFilterFooterView;
- (id)genUserNameLocalWithMsg:(id)arg1;
- (id)getSelectArray;
- (void)addFilterFooterView:(id)arg1;
- (void)initView;
- (void)initNavBar;
- (id)getMsgFrom:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)messageWrapMatchImageWithoutVideo:(id)arg1;
- (_Bool)onMsgNewImgLogicDataMatch:(id)arg1;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (void)initData;
- (_Bool)useBlackStatusbar;
- (id)getViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

