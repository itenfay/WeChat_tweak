//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCStoryBgmSearchCgiObj : NSObject
{
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithSearchId:(unsigned long long)arg1 searchKey:(id)arg2 pageOffset:(unsigned int)arg3 recommentId:(unsigned long long)arg4 bussId:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
