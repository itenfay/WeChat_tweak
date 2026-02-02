//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportAppMessageItem
{
    _Bool _hasRelievedBuyFlag;
    _Bool _hasFlagshipFlag;
    unsigned int _action;
    unsigned int _chatType;
    unsigned int _chatRoomUserCount;
    unsigned int _cardType;
    NSString *_chatName;
    NSString *_msgId;
    NSString *_cardId;
    NSString *_senderUsername;
    NSString *_enterPath;
    unsigned long long _exposePeriod;
    NSString *_scoreNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scoreNum; // @synthesize scoreNum=_scoreNum;
@property(nonatomic) _Bool hasFlagshipFlag; // @synthesize hasFlagshipFlag=_hasFlagshipFlag;
@property(nonatomic) _Bool hasRelievedBuyFlag; // @synthesize hasRelievedBuyFlag=_hasRelievedBuyFlag;
@property(nonatomic) unsigned long long exposePeriod; // @synthesize exposePeriod=_exposePeriod;
@property(retain, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(retain, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned int chatRoomUserCount; // @synthesize chatRoomUserCount=_chatRoomUserCount;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
- (id)reportString;
- (int)reportID;

@end

