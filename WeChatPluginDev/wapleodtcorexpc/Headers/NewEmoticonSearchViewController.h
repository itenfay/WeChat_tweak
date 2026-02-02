//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonSearchInMessagePanelReporter, EmoticonUploader, NSDictionary, NSString, StoreEmotionBatchEmojiDownLoadCgi, WCTopicSearchActionLogic;
@protocol EmoticonSearchViewControllerDelegate;

@interface NewEmoticonSearchViewController
{
    _Bool _includeCustomEmoji;
    _Bool _bShowKeyboardTips;
    unsigned int _sourceScene;
    id <EmoticonSearchViewControllerDelegate> _delegate;
    NSString *_chatId;
    WCTopicSearchActionLogic *_shareActionLogic;
    CEmoticonWrap *_selectedEmoticon;
    StoreEmotionBatchEmojiDownLoadCgi *_emojiDownloadCgi;
    EmoticonUploader *_emoticonUploader;
    EmoticonSearchInMessagePanelReporter *_reporter;
    unsigned long long _selectEmoticonTimeStamp;
    NSDictionary *_selectEmoticonParams;
}

+ (_Bool)expIfChangedBackgroundColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool bShowKeyboardTips; // @synthesize bShowKeyboardTips=_bShowKeyboardTips;
@property(retain, nonatomic) NSDictionary *selectEmoticonParams; // @synthesize selectEmoticonParams=_selectEmoticonParams;
@property(nonatomic) unsigned long long selectEmoticonTimeStamp; // @synthesize selectEmoticonTimeStamp=_selectEmoticonTimeStamp;
@property(retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) EmoticonUploader *emoticonUploader; // @synthesize emoticonUploader=_emoticonUploader;
@property(retain, nonatomic) StoreEmotionBatchEmojiDownLoadCgi *emojiDownloadCgi; // @synthesize emojiDownloadCgi=_emojiDownloadCgi;
@property(retain, nonatomic) CEmoticonWrap *selectedEmoticon; // @synthesize selectedEmoticon=_selectedEmoticon;
@property(nonatomic) _Bool includeCustomEmoji; // @synthesize includeCustomEmoji=_includeCustomEmoji;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic; // @synthesize shareActionLogic=_shareActionLogic;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(nonatomic) __weak id <EmoticonSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (void)reportSendEmoticonWithSuccess:(_Bool)arg1;
- (void)onSelectEmoticonFailed;
- (void)onSelectEmoticonFinished;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)startCdnUpload;
- (void)checkAndUploadEmoticon;
- (_Bool)needCheckUpload;
- (void)onEmoticonDownloaded:(id)arg1;
- (void)onSearchVCDisappearAction;
- (void)onSearchVCAppearAction;
- (void)onSetSearchTagResult:(id)arg1;
- (_Bool)shouldMakeTextFieldAutoBecomFirstResponder;
- (_Bool)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (id)initedUrlParams;
- (id)searchBarPlaceholder;
- (id)defaultNavTitle;
- (unsigned long long)localJSBizType;
- (unsigned long long)searchScene;
- (void)onTextFieldChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)leftIconBgImageColor;
- (id)baseBackgroundColor;
- (id)textfiledBackgroundColor;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2 sourceScene:(unsigned int)arg3 includeCustomEmoji:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

