//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessageRequestSubscribeCgi
{
    unsigned int _popupScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_username;
    unsigned long long _scene;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    NSString *_appid;
    NSString *_sessionId;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int popupScene; // @synthesize popupScene=_popupScene;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (id)subscribeStatusInBrand:(id)arg1;
- (id)subscribeStatusInWeapp:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithViewModel:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 appid:(id)arg4 popupScene:(unsigned int)arg5 sessionId:(id)arg6 extInfo:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

