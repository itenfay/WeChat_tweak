//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EcsGiftJumpInfo, NSDictionary, NSString;

@interface EcsGiftMsgItem
{
    unsigned int _subtype;
    NSDictionary *_giftList;
    NSString *_wishMessage;
    NSString *_giftMsgId;
    EcsGiftJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EcsGiftJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *giftMsgId; // @synthesize giftMsgId=_giftMsgId;
@property(retain, nonatomic) NSString *wishMessage; // @synthesize wishMessage=_wishMessage;
@property(retain, nonatomic) NSDictionary *giftList; // @synthesize giftList=_giftList;
@property(nonatomic) unsigned int subtype; // @synthesize subtype=_subtype;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

