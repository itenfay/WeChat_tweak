//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCCardAcceptCardListInfo
{
    unsigned int _fromScene;
    unsigned int _statScene;
    NSString *_bundleID;
    NSString *_chatName;
    NSString *_webUrl;
    NSMutableArray *_cardSeedList;
    NSString *_appID;
    NSString *_consumedboxCardId;
    NSString *_templateMsgId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(retain, nonatomic) NSString *consumedboxCardId; // @synthesize consumedboxCardId=_consumedboxCardId;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSMutableArray *cardSeedList; // @synthesize cardSeedList=_cardSeedList;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;

@end

