//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveReserveLiveNotceCGI
{
    int _scene;
    int _opType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _innerScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long innerScene; // @synthesize innerScene=_innerScene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 scene:(int)arg2 innerScene:(long long)arg3 opType:(int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

