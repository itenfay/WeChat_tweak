//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;

@interface WCFinderLiveGetExtraInfoCGI
{
    NSString *_anchorFinderusername;
    NSString *_audiencefinderusername;
    NSData *_liveCookies;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSMutableArray *_reqlist;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *reqlist; // @synthesize reqlist=_reqlist;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *audiencefinderusername; // @synthesize audiencefinderusername=_audiencefinderusername;
@property(copy, nonatomic) NSString *anchorFinderusername; // @synthesize anchorFinderusername=_anchorFinderusername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorFinderusername:(id)arg1 audiencefinderusername:(id)arg2 liveCookies:(id)arg3 taskId:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 reqlist:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

