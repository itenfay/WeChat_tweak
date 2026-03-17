//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromotePubbleContainerView;

@interface MMFinderLivePromoteDisplayLogicPromotionPubbleLifecycleCallbackParameter : NSObject
{
    MMFinderLivePromotePubbleContainerView *_promotePubbleContainerView;
}

@property(retain, nonatomic) MMFinderLivePromotePubbleContainerView *promotePubbleContainerView; // @synthesize promotePubbleContainerView=_promotePubbleContainerView;
- (void)setOperationDelegate:(id)arg1;
- (id)operationDelegate;
- (id)promoteMsgInfo;
- (id)promotePubbleView;
- (unsigned long long)type;

@end

