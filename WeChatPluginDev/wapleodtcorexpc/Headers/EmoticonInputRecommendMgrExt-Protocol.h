//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonWordListMeta, NSArray, NSString;

@protocol EmoticonInputRecommendMgrExt <NSObject>

@optional
- (void)onLocalRecommendLocalEmojiOcrResultUpdate;
- (void)onLocalRecommendLocalCustomEmoticonSwitchChanged:(_Bool)arg1;
- (void)onMergeRecommendEmoticon:(NSString *)arg1 emoticonWrapList:(NSArray *)arg2 sessionId:(NSString *)arg3 recSessionId:(NSString *)arg4 remoteWordListMeta:(EmoticonWordListMeta *)arg5;
@end

