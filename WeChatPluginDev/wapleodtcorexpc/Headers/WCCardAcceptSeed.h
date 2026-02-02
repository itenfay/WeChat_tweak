//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardAcceptSeed
{
    unsigned int _fromScene;
    unsigned int _statScene;
    unsigned int _followService;
    NSString *_cardId;
    NSString *_cardExt;
    NSString *_fromUserName;
    NSString *_chatName;
    NSString *_webUrl;
    NSString *_templateMsgId;
    NSString *_recommendCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId=_recommendCardId;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(nonatomic) unsigned int followService; // @synthesize followService=_followService;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;

@end

