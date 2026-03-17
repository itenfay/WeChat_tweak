//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol StoreEmotionGetDesignerEmojiListCgiDelegate <NSObject>

@optional
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListFailedWithKeyword:(NSString *)arg1;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(NSString *)arg1 Tags:(NSArray *)arg2 DesignerEmojiList:(NSArray *)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(NSArray *)arg2 DesignerEmojiList:(NSArray *)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListSuccessedWithTags:(NSArray *)arg1 DesignerEmojiList:(NSArray *)arg2 hasMore:(_Bool)arg3;
@end

