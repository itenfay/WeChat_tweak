//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCFinderCheckFeedsCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSArray *_readItems;
    NSArray *_unreadItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *unreadItems; // @synthesize unreadItems=_unreadItems;
@property(copy, nonatomic) NSArray *readItems; // @synthesize readItems=_readItems;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithReadItems:(id)arg1 unreadItems:(id)arg2 scene:(int)arg3 prefetchType:(int)arg4 lastCheckBuffer:(id)arg5 liveBaseInfo:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

