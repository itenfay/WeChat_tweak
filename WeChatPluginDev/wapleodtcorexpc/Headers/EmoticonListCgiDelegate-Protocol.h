//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol EmoticonListCgiDelegate <NSObject>
- (void)onGetExptConfig:(NSString *)arg1 reqType:(unsigned int)arg2;
- (void)onGetListFailedForReqType:(unsigned int)arg1;
- (void)onGetEmojiList:(NSArray *)arg1 forResult:(unsigned long long)arg2 reqType:(unsigned int)arg3;
- (void)onGetCellSetList:(NSArray *)arg1 andEmotionList:(NSArray *)arg2 hotNums:(NSArray *)arg3 forResult:(unsigned long long)arg4 reqType:(unsigned int)arg5 reqId:(NSString *)arg6;
- (void)onGetBannerSetList:(NSArray *)arg1 andNewBannerList:(NSArray *)arg2 reqType:(unsigned int)arg3;
- (void)onGetListFinishedWithBuff:(NSData *)arg1 reqType:(unsigned int)arg2;
@end

