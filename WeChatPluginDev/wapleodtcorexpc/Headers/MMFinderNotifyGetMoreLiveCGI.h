//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderNotifyGetMoreLiveCGIParam;

@interface MMFinderNotifyGetMoreLiveCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    MMFinderNotifyGetMoreLiveCGIParam *_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderNotifyGetMoreLiveCGIParam *param; // @synthesize param=_param;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithParam:(id)arg1;
- (id)initWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

