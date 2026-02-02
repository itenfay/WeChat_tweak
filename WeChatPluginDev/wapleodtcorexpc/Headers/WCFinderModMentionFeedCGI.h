//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderModMentionFeedCGI
{
    NSString *_userName;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithDisplayItems:(id)arg1 unDisplayItems:(id)arg2;
- (id)initWithUserName:(id)arg1 displayItems:(id)arg2 unDisplayItems:(id)arg3 successful:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;

@end

