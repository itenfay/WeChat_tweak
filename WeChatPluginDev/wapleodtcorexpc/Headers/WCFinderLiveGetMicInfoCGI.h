//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveGetMicInfoCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_liveCookies;
    NSString *_anchorFinderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 anchorFinderUsername:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

