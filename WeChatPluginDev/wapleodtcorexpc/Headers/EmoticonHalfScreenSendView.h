//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, EmoticonCustomManageAddLogic, EmoticonHalfScreenSendViewReportInfo, EmoticonStoreItem, ForwardMessageLogicController, MMUIActivityIndicatorView, NSString, PersonalDesigner, RichTextView, UIButton, UIImageView, UILabel;
@protocol EmoticonHalfScreenSendViewDelegate;

@interface EmoticonHalfScreenSendView
{
    _Bool _shouldShowEntry;
    _Bool _isSendPrimary;
    _Bool _didInitDetailView;
    _Bool _needReportEntryExpose;
    id <EmoticonHalfScreenSendViewDelegate> _delegate;
    EmojiInfoObj *_emojiInfoObj;
    UIButton *_sendBtn;
    UIButton *_addBtn;
    UIImageView *_emojiView;
    UILabel *_emojiDescLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    RichTextView *_entryView;
    EmoticonStoreItem *_entryItem;
    PersonalDesigner *_entryDesigner;
    EmoticonCustomManageAddLogic *_emoticonAddLogic;
    ForwardMessageLogicController *_forwardLogicController;
    EmoticonHalfScreenSendViewReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportEntryExpose; // @synthesize needReportEntryExpose=_needReportEntryExpose;
@property(retain, nonatomic) EmoticonHalfScreenSendViewReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic; // @synthesize emoticonAddLogic=_emoticonAddLogic;
@property(retain, nonatomic) PersonalDesigner *entryDesigner; // @synthesize entryDesigner=_entryDesigner;
@property(retain, nonatomic) EmoticonStoreItem *entryItem; // @synthesize entryItem=_entryItem;
@property(retain, nonatomic) RichTextView *entryView; // @synthesize entryView=_entryView;
@property(nonatomic) _Bool didInitDetailView; // @synthesize didInitDetailView=_didInitDetailView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *emojiDescLabel; // @synthesize emojiDescLabel=_emojiDescLabel;
@property(retain, nonatomic) UIImageView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) _Bool isSendPrimary; // @synthesize isSendPrimary=_isSendPrimary;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool shouldShowEntry; // @synthesize shouldShowEntry=_shouldShowEntry;
@property(nonatomic) __weak id <EmoticonHalfScreenSendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sdkReportParams;
- (void)reportAction:(unsigned long long)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (_Bool)shouldShowSendSuccessView:(id)arg1;
- (id)getCurrentViewController;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(_Bool)arg2;
- (id)getViewController;
- (id)appendChanelIconFor:(id)arg1;
- (id)entryContentWithName:(id)arg1 imgUrl:(id)arg2 isRound:(_Bool)arg3;
- (id)oWrapFromEmojiInfo:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onLongPressed:(id)arg1;
- (void)onTapCustomEntry;
- (void)onTapAdd;
- (void)onTapSend;
- (void)startDownloadEmoji;
- (void)initCustomEntry;
- (void)configIndicator;
- (void)genButtons:(_Bool)arg1;
- (double)calDetailViewHeight;
- (void)checkEntry;
- (void)initDetailView;
- (void)tryInitDetailView;
- (void)configPageSheet;
- (void)createOrUpadreLayout;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithEmojiInfoObj:(id)arg1 reportInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

