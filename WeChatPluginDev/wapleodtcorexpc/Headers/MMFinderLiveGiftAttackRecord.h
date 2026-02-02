//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftPlayItem, NSString;

@interface MMFinderLiveGiftAttackRecord : NSObject
{
    _Bool _isGiftAttackStart;
    MMFinderLiveGiftPlayItem *_playItem;
    CDUnknownBlockType _giftAttackEndCallback;
    CDUnknownBlockType _giftAttackGetAutoEndDurationCallback;
    CDUnknownBlockType _rewardCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType rewardCompletion; // @synthesize rewardCompletion=_rewardCompletion;
@property(copy, nonatomic) CDUnknownBlockType giftAttackGetAutoEndDurationCallback; // @synthesize giftAttackGetAutoEndDurationCallback=_giftAttackGetAutoEndDurationCallback;
@property(copy, nonatomic) CDUnknownBlockType giftAttackEndCallback; // @synthesize giftAttackEndCallback=_giftAttackEndCallback;
@property(nonatomic) _Bool isGiftAttackStart; // @synthesize isGiftAttackStart=_isGiftAttackStart;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *playItem; // @synthesize playItem=_playItem;
- (double)autoEndDuration;
@property(readonly, nonatomic) NSString *recordId;
- (void)invokeAutoEnd;
- (void)onGiftAttackEnd:(long long)arg1;
- (void)onGiftAttackStart;
- (id)initWithPlayItem:(id)arg1;

@end

