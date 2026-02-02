//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, ForwardMessageLogicController, MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UIImageView;

@interface EmoticonCustomCreateResultViewController
{
    _Bool _didBatchDownloadEmojiInfo;
    _Bool _isExceedLimit;
    NSString *_editSessionId;
    EmojiInfoObj *_emojiInfoObj;
    UIButton *_sendBtn;
    UIButton *_doneBtn;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UIImageView *_emojiView;
    ForwardMessageLogicController *_forwardLogicController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExceedLimit; // @synthesize isExceedLimit=_isExceedLimit;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(nonatomic) _Bool didBatchDownloadEmojiInfo; // @synthesize didBatchDownloadEmojiInfo=_didBatchDownloadEmojiInfo;
@property(retain, nonatomic) UIImageView *emojiView; // @synthesize emojiView=_emojiView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *editSessionId; // @synthesize editSessionId=_editSessionId;
- (void)registerYReportSdk;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (_Bool)shouldShowSendSuccessView:(id)arg1;
- (id)getCurrentViewController;
- (void)onTapDone;
- (void)realStartForward;
- (void)onTapSend;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationBarConfig;
- (void)startDownloadEmoji;
- (void)createOrUpdateLayout;
- (void)initViews;
- (void)viewDidLoad;
- (id)initWithEmojiInfo:(id)arg1 isExceedLimit:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

