//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, NSString;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@protocol MMFinderLiveGiftSendMoreBubbleHosting <NSObject>
@property(nonatomic) __weak id <MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)setInterruptedFlag:(_Bool)arg1 targetHost:(unsigned long long)arg2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setEnableSendAgainWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1 comboId:(NSString *)arg2 targetHost:(unsigned long long)arg3;
@end

