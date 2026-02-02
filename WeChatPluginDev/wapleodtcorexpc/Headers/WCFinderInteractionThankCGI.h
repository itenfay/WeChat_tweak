//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderInteractionThankCGIParams;

@interface WCFinderInteractionThankCGI
{
    _Bool _thanked;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_finderUsername;
    NSString *_wxUsername;
    WCFinderInteractionThankCGIParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderInteractionThankCGIParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool thanked; // @synthesize thanked=_thanked;
@property(copy, nonatomic) NSString *wxUsername; // @synthesize wxUsername=_wxUsername;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (id)description;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithThanked:(_Bool)arg1 finderUsername:(id)arg2 wxUsername:(id)arg3 params:(id)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;

@end

