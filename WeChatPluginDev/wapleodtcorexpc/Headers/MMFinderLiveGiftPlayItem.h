//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGift_MultiAnimationItem, MMFinderLiveRewardAppMsgInfo, MMFinderLiveRewardGiftItem, NSString;

@interface MMFinderLiveGiftPlayItem : NSObject
{
    _Bool _sentByMe;
    unsigned int _startTime;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsgInfo;
    NSString *_comboId;
    NSString *_animationId;
    FinderLiveGift_MultiAnimationItem *_multiAnimationItem;
    long long _playAttackGiftItemIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long playAttackGiftItemIndex; // @synthesize playAttackGiftItemIndex=_playAttackGiftItemIndex;
@property(retain, nonatomic) FinderLiveGift_MultiAnimationItem *multiAnimationItem; // @synthesize multiAnimationItem=_multiAnimationItem;
@property(retain, nonatomic) NSString *animationId; // @synthesize animationId=_animationId;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(nonatomic) _Bool sentByMe; // @synthesize sentByMe=_sentByMe;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo; // @synthesize rewardAppMsgInfo=_rewardAppMsgInfo;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)updateWithResourceUrl:(id)arg1 animationId:(id)arg2;
- (id)initWithGiftItem:(id)arg1 rewardAppMsgInfo:(id)arg2 comboId:(id)arg3 sentByMe:(_Bool)arg4;

@end

