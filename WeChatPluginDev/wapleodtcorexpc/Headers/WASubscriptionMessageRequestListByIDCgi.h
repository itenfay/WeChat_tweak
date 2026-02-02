//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WASubscriptionMessageRequestListByIDCgi
{
    unsigned int _appType;
    unsigned int _popupScene;
    NSArray *_templateArray;
    NSString *_subscriptionUrl;
    NSString *_username;
    unsigned long long _scene;
    NSString *_appid;
    NSString *_sessionId;
    NSString *_extInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int popupScene; // @synthesize popupScene=_popupScene;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *subscriptionUrl; // @synthesize subscriptionUrl=_subscriptionUrl;
@property(retain, nonatomic) NSArray *templateArray; // @synthesize templateArray=_templateArray;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)generateItemListWith:(id)arg1;
- (void)createRequest;
- (id)initWithTemplateArray:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 popupScene:(unsigned int)arg5 sessionId:(id)arg6 extInfo:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
- (id)initWithSubscriptionUrl:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 popupScene:(unsigned int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithTemplateArray:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 appType:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

