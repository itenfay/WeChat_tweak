//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomManageAddLogic, MMEmoticonView, MMSearchEmotWrap, MMUIActivityIndicatorView, MMWebImageView, NSString, UIButton, UILabel, UIView;

@interface MMEmoticonFromSearchViewController
{
    MMSearchEmotWrap *m_emotWrap;
    UIView *m_emotContentView;
    MMUIActivityIndicatorView *m_activityIndicatorView;
    MMEmoticonView *m_emotView;
    UIButton *m_saveBtn;
    UIButton *m_sendBtn;
    _Bool m_isEmotExpand;
    _Bool m_isAnimating;
    UIButton *m_operateButton;
    UILabel *m_operatePrefixLabel;
    UILabel *m_operateTitleLabel;
    MMWebImageView *m_operateThumbView;
    int m_internalStatus;
    EmoticonCustomManageAddLogic *m_emoticonAddLogic;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(_Bool)arg2;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)onDownloadCustomEmoticonFail;
- (void)onDownloadCustomEmoticonFinishWithData:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onReturn;
- (void)onOperate:(id)arg1;
- (void)onExposeEmot:(id)arg1;
- (void)onSaveEmot:(id)arg1;
- (void)onSendEmot:(id)arg1;
- (void)onAddEmot:(id)arg1;
- (void)setButton:(id)arg1 enable:(_Bool)arg2;
- (unsigned int)currentLaunchType;
- (void)reportPageLaunch;
- (void)reportEmotOperationForSearch:(int)arg1;
- (void)reportViewDisplay;
- (void)doSendEmotReport;
- (void)doAddEmotReport;
- (void)doExchangeProcess;
- (void)doForwardEmot;
- (void)doAddEmot;
- (void)doubleTapEmotView:(id)arg1;
- (_Bool)isBrandOperateContent;
- (_Bool)isWeappOperateContent;
- (_Bool)isOperateContentClickable;
- (_Bool)shouldDisplayOperateImageView;
- (_Bool)shouldDisplayOperateContent;
- (_Bool)isCustomEmoticon;
- (_Bool)isStoreEmoticon;
- (id)getOperateTitle;
- (id)getOperateImgUrlStr;
- (void)jumpBrandProfile;
- (void)jumpWeappProfile;
- (void)jumpSourceWebView;
- (void)jumpEmotDesiger;
- (void)jumpEmotStore;
- (void)initEmotData;
- (void)layoutEmotContent;
- (void)initEmotContent;
- (void)initOperateContent;
- (void)initView;
- (void)initTitleArea;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEmojiWrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

