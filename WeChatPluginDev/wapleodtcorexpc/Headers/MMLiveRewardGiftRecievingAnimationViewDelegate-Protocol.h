//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveGiftRandomItem, MMFinderLivePlayGiftAnimationCommand, MMFinderLiveRewardAppMsgInfo, NSString;

@protocol MMLiveRewardGiftRecievingAnimationViewDelegate <NSObject>

@optional
- (MMFinderLivePlayGiftAnimationCommand *)onPeekGiftAnimationPlayCommand;
- (MMFinderLivePlayGiftAnimationCommand *)onDequeueGiftAnimationPlayCommand;
- (FinderLiveGiftRandomItem *)onGetNextAnimationWithComboId:(NSString *)arg1 animationIndex:(unsigned long long)arg2;
- (MMFinderLiveRewardAppMsgInfo *)onPeekNextPKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(NSString *)arg1;
- (MMFinderLiveRewardAppMsgInfo *)onRetrivePKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(NSString *)arg1;
- (MMFinderLiveRewardAppMsgInfo *)onPeekNextInteractionRewardAppMsgInfoForSerialDisplay;
- (MMFinderLiveRewardAppMsgInfo *)onRetriveInteractionRewardAppMsgInfoForSerialDisplay;
- (MMFinderLiveRewardAppMsgInfo *)onPeekNextRewardAppMsgInfoForSerialDisplay;
- (void)onDismissRewardDisplayWithComboId:(NSString *)arg1;
- (void)onUpdateLastDisplayGiftCountWithComboId:(NSString *)arg1 lastDisplayGiftCount:(unsigned int)arg2;
- (unsigned int)onGetLastDisplayGiftCountWithComboId:(NSString *)arg1;
- (MMFinderLiveRewardAppMsgInfo *)onRetriveRewardAppMsgInfoForSerialDisplay;
- (MMFinderLiveRewardAppMsgInfo *)onPeekNextRewardAppMsgInfoForDisplayWithRewardRecipient:(NSString *)arg1;
- (MMFinderLiveRewardAppMsgInfo *)onRetriveRewardAppMsgInfoForDisplayWithRewardRecipient:(NSString *)arg1;
- (MMFinderLiveRewardAppMsgInfo *)onRetriveRewardAppMsgInfoForDisplay;
@end

