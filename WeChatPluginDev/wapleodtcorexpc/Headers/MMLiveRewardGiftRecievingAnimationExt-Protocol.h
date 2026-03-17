//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveGiftAttackItem, MMFinderLivePlayGiftAnimationCommand, NSString;

@protocol MMLiveRewardGiftRecievingAnimationExt <NSObject>

@optional
- (void)onSingleAttackGiftDidFinishRender:(FinderLiveGiftAttackItem *)arg1 attackUsername:(NSString *)arg2;
- (void)onGiftAnimationPlayCommandExecuted:(MMFinderLivePlayGiftAnimationCommand *)arg1;
- (void)onGiftAnimationPlayCommandExecuting:(MMFinderLivePlayGiftAnimationCommand *)arg1;
@end

