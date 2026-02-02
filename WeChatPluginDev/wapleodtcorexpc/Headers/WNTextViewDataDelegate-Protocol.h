//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "RTETextViewDataDelegate-Protocol.h"

@class CMessageWrap, FavoritesItem, MMUIViewController, NSString, UIAccessibilityElement, UITextPosition, WCDataItem, WNContentStorage, WNTextView;

@protocol WNTextViewDataDelegate <RTETextViewDataDelegate>
- (WCDataItem *)getWCDataItem;
- (FavoritesItem *)getFavItem;
- (CMessageWrap *)getMessageWrap;
- (_Bool)isNomalLineHeightAtPosition:(UITextPosition *)arg1 with:(WNTextView *)arg2;
- (void)onOpenTopicWithUrl:(NSString *)arg1;
- (void)onAccessiblityBecomeFocus:(UIAccessibilityElement *)arg1;
- (MMUIViewController *)getCurrentViewController;
- (void)onRedo;
- (void)onUndo;
- (WNContentStorage *)contentStorage;
- (void)editSelectedContent;
- (void)deleteSelectedContent;
- (void)cutSelectedContent;
- (void)copySelectedContent;
- (void)setSmallImageEnable:(_Bool)arg1;
- (void)setHighlightEnableOnSelectedContent:(_Bool)arg1;
- (void)setBoldEnableOnSelectedContent:(_Bool)arg1;
- (struct _NSRange)selectedRange;
- (_Bool)bEditable;
- (_Bool)canSelectAll;
- (void)selectAll;
- (void)pasteSelectedContent;
@end

