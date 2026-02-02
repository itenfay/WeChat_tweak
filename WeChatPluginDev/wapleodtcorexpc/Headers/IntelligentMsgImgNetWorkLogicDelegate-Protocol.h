//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IntelligentMsgImgNetWorkLogicDelegate <NSObject>
- (void)onGetSimilarWordsWithQuery:(NSString *)arg1 simWordList:(NSArray *)arg2 isSecureRank:(_Bool)arg3 success:(_Bool)arg4 errMsg:(NSString *)arg5;
@end

