//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonRecommendBoardCgi, NSArray;

@protocol EmoticonRecommendBoardCgiDelegate <NSObject>
- (void)onEmoticonRecommendBoardCgiFailed:(EmoticonRecommendBoardCgi *)arg1;
- (void)onEmoticonRecommendBoardCgiOk:(EmoticonRecommendBoardCgi *)arg1 recommendWraps:(NSArray *)arg2;
@end

