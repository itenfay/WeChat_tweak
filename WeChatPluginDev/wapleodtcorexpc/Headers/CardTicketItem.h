//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CardTicketItem
{
    _Bool _isRecommend;
    unsigned int _fromScene;
    unsigned int _cardType;
    unsigned int _cardShareFrom;
    NSString *_fromUserName;
    NSString *_cardTypeName;
    NSString *_cardId;
    NSString *_color;
    NSString *_brandName;
    NSString *_cardExt;
    NSString *_recommendCardId;
}

+ (void)initialize;
+ (void)PBArrayAdd_recommendCardId;
+ (void)PBArrayAdd_isRecommend;
+ (void)PBArrayAdd_cardShareFrom;
+ (void)PBArrayAdd_cardExt;
+ (void)PBArrayAdd_brandName;
+ (void)PBArrayAdd_cardTypeName;
+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_cardType;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_fromUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId=_recommendCardId;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(nonatomic) unsigned int cardShareFrom; // @synthesize cardShareFrom=_cardShareFrom;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName=_cardTypeName;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

