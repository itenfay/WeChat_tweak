//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardView, EmoticonSearchHalfScreenViewController, MMTextView, NSString, UIFont;

@interface WAEmoticonBoardProxy : NSObject
{
    EmoticonBoardView *_emoticonBoardView;
    NSString *_appId;
    MMTextView *_textView;
    UIFont *_font;
    EmoticonSearchHalfScreenViewController *_searchEmoticonViewController;
}

+ (_Bool)IsSupportEmoticonBoard;
- (void).cxx_destruct;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)showSearchEmoticonViewController;
- (void)onEmoticonSearchIconClicked;
- (_Bool)isSticker;
- (void)setShowSearchEmoticon:(_Bool)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)setShowStoreEmoticon:(_Bool)arg1;
- (void)setEmoticonFont:(id)arg1;
- (id)getGameVCByAppId:(id)arg1;
- (void)deleteEmoticon;
- (void)setFinishButtonTitle:(id)arg1;
- (void)setCanSend:(_Bool)arg1;
- (struct _NSRange)rangeOfEmoticon:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)onSendButtonClicked;
- (double)getEmoticonBoardViewPreferHeight;
- (void)showEmoticonBoardViewInView:(id)arg1 animated:(_Bool)arg2;
- (void)setAppId:(id)arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)initEmoticonView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

