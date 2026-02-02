//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MISSING_TYPE;

@interface WSWebViewPlugin_InputKeyboard
{
    MISSING_TYPE *defaultAnimateDuration;
    MISSING_TYPE *storedAnimateDuration;
    MISSING_TYPE *monitorKeyboard;
    MISSING_TYPE *keyBoardHeight;
    MISSING_TYPE *$__lazy_storage_$_emoticonBoardView;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) EmoticonBoardView *emoticonBoardView;
- (double)ajustedAnimateDuration:(double)arg1;
- (void)sendToH5WithEmoticonText:(id)arg1;
- (void)resignResponder;
- (double)getEmoticonBoardHeight;
- (void)hideEmoticonBoardWithAnimateDuration:(double)arg1;
- (void)showEmoticonBoardWithAnimateDuration:(double)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)onSendButtonClicked;
- (void)deleteEmoticon;
- (void)didSelectorEmoticon:(id)arg1;

@end

