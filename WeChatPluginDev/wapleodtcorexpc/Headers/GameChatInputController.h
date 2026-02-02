//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameChatInputController
{
    _Bool _isShowingSearchView;
}

@property(nonatomic) _Bool isShowingSearchView; // @synthesize isShowingSearchView=_isShowingSearchView;
- (id)getChatUsername;
- (_Bool)shouldInterceptExpressionPanelOnKeyboardChanged:(_Bool)arg1;
- (void)showSearchEmoticonViewController;
- (void)onSearchViewHide;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)notifyInputViewHeightChanged;
- (void)liveInputKeyboardDidShow:(id)arg1;
- (void)setFKeyboardHeight:(double)arg1;
- (void)dealloc;
- (void)initNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

