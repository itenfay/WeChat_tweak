//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, NSString;

@interface MMLiveRoomMsg : NSObject
{
    unsigned int _msgType;
    unsigned int _msgCreateTime;
    unsigned int _comboRewardCount;
    unsigned int _rankingPosition;
    NSString *_senderNickName;
    NSString *_senderHeadImgUrl;
    NSString *_content;
    unsigned long long _msgSeq;
    NSString *_clientMsgId;
    NSString *_localClientMsgId;
    MMFinderLiveRewardGiftItem *_comboRewardProduct;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int rankingPosition; // @synthesize rankingPosition=_rankingPosition;
@property(nonatomic) unsigned int comboRewardCount; // @synthesize comboRewardCount=_comboRewardCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *comboRewardProduct; // @synthesize comboRewardProduct=_comboRewardProduct;
@property(copy) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;
@property(copy) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) unsigned long long msgSeq; // @synthesize msgSeq=_msgSeq;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(copy) NSString *content; // @synthesize content=_content;
@property(copy) NSString *senderHeadImgUrl; // @synthesize senderHeadImgUrl=_senderHeadImgUrl;
@property(copy) NSString *senderNickName; // @synthesize senderNickName=_senderNickName;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

