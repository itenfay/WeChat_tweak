//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _TtC6WeChat15MagicRewardView;

@interface MMLiveGiftMagicRewardHandler : NSObject
{
    _TtC6WeChat15MagicRewardView *_rewardView;
    NSString *_productId;
    NSMutableArray *_liveGiftMRViewListenerList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *liveGiftMRViewListenerList; // @synthesize liveGiftMRViewListenerList=_liveGiftMRViewListenerList;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) __weak _TtC6WeChat15MagicRewardView *rewardView; // @synthesize rewardView=_rewardView;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onResLoadedWithView:(id)arg1;
- (void)onPlayCancelWithView:(id)arg1;
- (void)prepareEdit:(id)arg1;
- (void)preparePlay:(id)arg1;
- (void)removeLiveGiftMRListener:(id)arg1;
- (void)addLiveGiftMRListener:(id)arg1;
- (id)getMagicRewardView;
- (id)currentProductId;
- (void)updateProductId:(id)arg1;
- (void)addMRListeners;
- (id)initWithMagicRewardView:(id)arg1;

@end

