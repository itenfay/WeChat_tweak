//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLivePaidBarrageRequestObject
{
    unsigned int _rewardCount;
    NSString *_clientMsgId;
    NSString *_productId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int rewardCount; // @synthesize rewardCount=_rewardCount;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
- (void)retrieveBillToPayWithBlock:(CDUnknownBlockType)arg1;

@end

