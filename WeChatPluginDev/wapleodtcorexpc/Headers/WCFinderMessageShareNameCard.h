//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderMessageShareNameCard
{
    NSString *_username;
    NSString *_avatar;
    NSString *_nickname;
    NSString *_authJob;
    NSString *_authIcon;
    NSString *_authIconUrl;
    NSString *_lastGMsgID;
    NSString *_ecSource;
    unsigned long long _contentType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(copy, nonatomic) NSString *lastGMsgID; // @synthesize lastGMsgID=_lastGMsgID;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(copy, nonatomic) NSString *authIcon; // @synthesize authIcon=_authIcon;
@property(copy, nonatomic) NSString *authJob; // @synthesize authJob=_authJob;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)isMemberShipFeed;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

