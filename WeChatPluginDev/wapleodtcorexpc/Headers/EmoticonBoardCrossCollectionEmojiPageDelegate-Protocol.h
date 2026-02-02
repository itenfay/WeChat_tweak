//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "EmoticonBoardCrossCollectionBasePageDelegate-Protocol.h"

@class NSString;

@protocol EmoticonBoardCrossCollectionEmojiPageDelegate <EmoticonBoardCrossCollectionBasePageDelegate>
- (_Bool)shouldShowQQEmojiSendButton;
- (void)shouldHideQQEmojiPreview;
- (void)shouldShowQQEmojiPreviewForKey:(NSString *)arg1 atCenterPoint:(struct CGPoint)arg2 hideDesc:(_Bool)arg3;
- (void)onQQEmojiPageCellTapDeleteButton;
- (void)onQQEmojiPageCellTapSendButton;
- (void)onQQEmojiPageCellTapQQEmojiWithCode:(NSString *)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
@end

