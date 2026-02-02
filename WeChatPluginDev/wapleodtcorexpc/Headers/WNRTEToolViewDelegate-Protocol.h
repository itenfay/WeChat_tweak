//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WNRTEToolViewHelperDelegate-Protocol.h"

@class FavoritesItem;

@protocol WNRTEToolViewDelegate <WNRTEToolViewHelperDelegate>
- (FavoritesItem *)getCurrentNoteItem;
- (void)onShowVoiceInputView;
- (void)onClickRedo;
- (void)onClickUndo;
- (void)onClickTextMore;
- (void)onClickLocation;
- (void)onClickFile;
- (void)onClickChoosePhoto;
- (long long)currentOrientation;
- (_Bool)isTodoParagraph;
- (_Bool)isOlLiParagraph;
- (_Bool)isUlLiParagraph;
- (_Bool)canHighlight;
- (_Bool)canBold;
- (void)holdOnAudio;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (unsigned int)maxObjectCount;
- (unsigned int)objectCount;
- (void)onAddCurrentTime;
- (void)onParagraphSetTodo;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onHighlight;
- (void)onBold;
- (void)showKeyboard;
@end

