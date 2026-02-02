//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem;

@interface WCFinderLiveGamePopSceneCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSString *_gameAppId;
    long long _scene;
    long long _result;
}

- (void).cxx_destruct;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithScene:(long long)arg1 result:(long long)arg2 liveTaskId:(id)arg3 finderDataItem:(id)arg4 gameAppId:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

