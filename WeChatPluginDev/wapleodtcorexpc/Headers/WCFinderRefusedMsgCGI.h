//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WCFinderRefusedMsgCGI : NSObject
{
    _Bool _isSwitchOn;
    _Bool _refuseObjectIsFinder;
    NSString *_sessionId;
    NSString *_userName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool refuseObjectIsFinder; // @synthesize refuseObjectIsFinder=_refuseObjectIsFinder;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithRefusedMsgSwitchState:(_Bool)arg1 userName:(id)arg2 sessionId:(id)arg3 refuseObjectIsFinder:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end
