//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGetFavListCgi
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 tabType:(int)arg3 clientStatus:(id)arg4 scene:(int)arg5 completion:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 tabType:(int)arg3 clientStatus:(id)arg4 topicId:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 clientStatus:(id)arg3 completion:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;

@end

