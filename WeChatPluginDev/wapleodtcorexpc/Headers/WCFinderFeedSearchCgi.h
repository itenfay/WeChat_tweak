//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderFeedSearchCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithQueryText:(id)arg1 tagTexts:(id)arg2 requestID:(id)arg3 interactionScene:(int)arg4 commentScene:(int)arg5 lastBuffer:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

