//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMFinderGetLiveGloryListCgi : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithCookies:(id)arg1 lastbuffer:(id)arg2;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 lastBuffer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end
