//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface MMFinderLiveAudienceCheckFanClubCGI
{
    int _opCode;
    NSData *_liveCookies;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _successBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) int opCode; // @synthesize opCode=_opCode;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initCheckAudienceFanClubWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initQuerySuperfanProductWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

