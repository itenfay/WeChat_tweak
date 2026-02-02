//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonCustomAddLogicController, MMEmoticonView, NSString, UIImageView;

@interface FavRecordEmojiNodeView
{
    MMEmoticonView *_emojiView;
    UIImageView *_gameEmojiView;
    EmoticonCustomAddLogicController *_emoticonAddLogicController;
    CEmoticonWrap *_emoticonWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController; // @synthesize emoticonAddLogicController=_emoticonAddLogicController;
@property(readonly, nonatomic) UIImageView *gameEmojiView; // @synthesize gameEmojiView=_gameEmojiView;
@property(readonly, nonatomic) MMEmoticonView *emojiView; // @synthesize emojiView=_emojiView;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (id)gameEmoticonAccessibilityLabel;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)getViewController;
- (struct CGRect)targetRectForMenuControllerForRecordDetail;
- (id)getGameImageByContent:(unsigned int)arg1;
- (_Bool)isGameEmoticon;
- (void)doForward;
- (void)showDetailPageWithNeedScrollToBottom:(_Bool)arg1 extrance:(long long)arg2;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onShowDetailPage:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (void)handleLongGesture:(id)arg1;
- (void)onTouchUpInside;
- (void)layoutSubviews;
- (void)addContentSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

