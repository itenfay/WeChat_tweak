//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmojiInputView, MMImage, NSArray, NSString, UIButton, UIImageView, UIView;

@interface GCWebInputToolView
{
    _Bool _stickBtmIfNonEmpty;
    _Bool _isEmptyInput;
    _Bool _canSendWithoutText;
    _Bool _isFromEmoticon;
    UIView *_btmLineView;
    UIButton *_imgBtn;
    UIButton *_sendBtn;
    CEmoticonWrap *_emoticonWrap;
    MMImage *_pickMmImage;
    UIImageView *_chooseImgView;
    UIView *_emojiInputBGView;
    EmojiInputView *_emojiInputView;
    NSArray *_emojiList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *emojiList; // @synthesize emojiList=_emojiList;
@property(retain, nonatomic) EmojiInputView *emojiInputView; // @synthesize emojiInputView=_emojiInputView;
@property(retain, nonatomic) UIView *emojiInputBGView; // @synthesize emojiInputBGView=_emojiInputBGView;
@property(nonatomic) _Bool isFromEmoticon; // @synthesize isFromEmoticon=_isFromEmoticon;
@property(retain, nonatomic) UIImageView *chooseImgView; // @synthesize chooseImgView=_chooseImgView;
@property(nonatomic) _Bool canSendWithoutText; // @synthesize canSendWithoutText=_canSendWithoutText;
@property(nonatomic) _Bool isEmptyInput; // @synthesize isEmptyInput=_isEmptyInput;
@property(nonatomic) _Bool stickBtmIfNonEmpty; // @synthesize stickBtmIfNonEmpty=_stickBtmIfNonEmpty;
@property(retain, nonatomic) MMImage *pickMmImage; // @synthesize pickMmImage=_pickMmImage;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIButton *imgBtn; // @synthesize imgBtn=_imgBtn;
@property(retain, nonatomic) UIView *btmLineView; // @synthesize btmLineView=_btmLineView;
- (void)forceClearInputContent;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 btnTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (double)subClsAditionPubbleViewHeight;
- (void)updateSelfHeight;
- (void)layoutUI;
- (_Bool)needStickBtm;
- (void)createEmojiInputViewIfNeed:(id)arg1;
- (void)checkIsEmpty;
- (void)onTextChange:(id)arg1;
- (void)checkReplaceImgTip:(id)arg1 competionBlock:(CDUnknownBlockType)arg2;
- (void)didChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3 needShowInputView:(_Bool)arg4;
- (void)didChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3;
- (void)tryChooseNewImg:(id)arg1 pickMmImage:(id)arg2 emoticonWrap:(id)arg3;
- (_Bool)customeHandleEmoticonSelect:(id)arg1;
- (_Bool)canSelectEmoji:(id)arg1;
- (void)showEmoticonView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)subclassOnShowInputView;
- (void)report12909WithWithScene:(long long)arg1 uiArea:(long long)arg2 position:(unsigned int)arg3 action:(long long)arg4 extInfo:(id)arg5;
- (void)handleMMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)showImageEditor;
- (void)pickImg;
- (void)onDidCommitEnd;
- (void)onSendBtnClick;
- (void)onDeleteImage:(_Bool)arg1 needShowInputView:(_Bool)arg2;
- (void)onGCPreviewDismiss;
- (void)browserImage;
- (void)onChooseImgSelect;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

