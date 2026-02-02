//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderContact, WCFinderDataItem;

@interface WCFinderLiveCloseMicWithAudienceCGI
{
    _Bool _isAnchor;
    int _closeScene;
    WCFinderDataItem *_dataItem;
    WCFinderContact *_toFinderContact;
    NSString *_sdkUserId;
    NSString *_sessionId;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) int closeScene; // @synthesize closeScene=_closeScene;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) WCFinderContact *toFinderContact; // @synthesize toFinderContact=_toFinderContact;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 isAnchor:(_Bool)arg4 sdkUserId:(id)arg5 sessionId:(id)arg6 closeScene:(long long)arg7 liveCookies:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;

@end

