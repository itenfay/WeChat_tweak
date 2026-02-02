//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardTpInfoItem
{
    NSString *_cardTpID;
    NSString *_cardCode;
    NSString *_openCardParams;
    NSString *_appid;
    NSString *_userCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userCardId; // @synthesize userCardId=_userCardId;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *openCardParams; // @synthesize openCardParams=_openCardParams;
@property(retain, nonatomic) NSString *cardCode; // @synthesize cardCode=_cardCode;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;

@end

