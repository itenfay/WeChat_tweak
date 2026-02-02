//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveElectronicCommerceRoomConfigCGI
{
    int _reqScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _scene;
    NSString *_anchorFinderUsrName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorFinderUsrName; // @synthesize anchorFinderUsrName=_anchorFinderUsrName;
@property(nonatomic) int reqScene; // @synthesize reqScene=_reqScene;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithReqScene:(unsigned int)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithLiveTaskId:(id)arg1 scene:(long long)arg2 anchorFinderUserName:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

