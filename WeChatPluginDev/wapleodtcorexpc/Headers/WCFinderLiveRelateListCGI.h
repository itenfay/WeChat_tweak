//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveRelateListCGI
{
    int _commentScene;
    NSData *_lastBuff;
    NSString *_tid;
    NSString *_nonceID;
    NSString *_sessionID;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_liveRelatedLastBuff;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *liveRelatedLastBuff; // @synthesize liveRelatedLastBuff=_liveRelatedLastBuff;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 sessionID:(id)arg4 location:(id)arg5 scene:(long long)arg6 commentScene:(int)arg7 clientStatus:(id)arg8 liveClientStatus:(id)arg9 lbsTabTipsInfo:(id)arg10 liveRelatedLastBuff:(id)arg11 commByPass:(id)arg12 pullType:(int)arg13 readStats:(id)arg14 curObjectIndex:(long long)arg15 liveCookies:(id)arg16 successful:(CDUnknownBlockType)arg17 failure:(CDUnknownBlockType)arg18;

@end

