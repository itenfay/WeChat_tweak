//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCFinderContact;

@interface WCFinderNewApplyMicCGI
{
    WCFinderContact *_toFinderContact;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_liveCookies;
    NSData *_randomMicBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *randomMicBuffer; // @synthesize randomMicBuffer=_randomMicBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 toFinderContact:(id)arg3 randomMicBuffer:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

