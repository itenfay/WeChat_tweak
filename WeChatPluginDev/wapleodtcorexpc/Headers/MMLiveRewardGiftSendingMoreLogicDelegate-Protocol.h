//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, NSString;

@protocol MMLiveRewardGiftSendingMoreLogicDelegate <NSObject>
- (void)delayCallOnSendingGiftBatchFinish:(MMFinderLiveRewardGiftItem *)arg1 sendingComboId:(NSString *)arg2 comboGiftCount:(unsigned long long)arg3 delayInterval:(double)arg4 sourceHost:(unsigned long long)arg5;
- (void)onSendingGiftBatchFinish:(MMFinderLiveRewardGiftItem *)arg1 sendingComboId:(NSString *)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onLongPressSendingGiftFinished:(MMFinderLiveRewardGiftItem *)arg1 sendingComboId:(NSString *)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onSendingGiftBatchUpdate:(MMFinderLiveRewardGiftItem *)arg1 sendingComboId:(NSString *)arg2 comboGiftCount:(unsigned long long)arg3 fromLongPress:(_Bool)arg4 sourceHost:(unsigned long long)arg5;
@end

