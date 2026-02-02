//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGlobalFavListCGI
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 lastBuffer:(id)arg2 commentScene:(int)arg3 entryScene:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;

@end

