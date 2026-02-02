//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveGetAuthorizationCGI
{
    _Bool _isReject;
    unsigned int _platform;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_finderUsername;
    NSData *_deviceId;
    NSString *_ticket;
    NSString *_appId;
    NSString *_gameUserId;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReject; // @synthesize isReject=_isReject;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSData *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 deviceId:(id)arg2 ticket:(id)arg3 appId:(id)arg4 scene:(unsigned long long)arg5 isReject:(_Bool)arg6 platform:(unsigned int)arg7 gameUserId:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;

@end

