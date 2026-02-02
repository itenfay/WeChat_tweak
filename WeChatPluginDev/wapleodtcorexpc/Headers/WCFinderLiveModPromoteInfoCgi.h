//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorPromoteInfo;

@interface WCFinderLiveModPromoteInfoCgi
{
    int _opType;
    MMFinderLiveAnchorPromoteInfo *_modPromoteInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMFinderLiveAnchorPromoteInfo *modPromoteInfo; // @synthesize modPromoteInfo=_modPromoteInfo;
@property(nonatomic) int opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)getCurrentAnchorUsername;
- (id)initWithLiveTaskId:(id)arg1 opType:(unsigned long long)arg2 promoteInfo:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

