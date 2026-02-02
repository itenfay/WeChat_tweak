//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveGetLotteryRecordCGI
{
    _Bool _isAudience;
    long long _opType;
    NSString *_lotteryId;
    unsigned long long _liveId;
    unsigned long long _objectId;
    NSString *_nonceId;
    NSString *_finderUserName;
    NSData *_lastBuffer;
    NSData *_liveCookies;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) long long opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithOpType:(long long)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 finderDataItem:(id)arg4 finderUserName:(id)arg5 lastBuffer:(id)arg6 liveCookies:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
- (id)initWithOpType:(long long)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 liveId:(unsigned long long)arg4 objectId:(unsigned long long)arg5 objectNonceId:(id)arg6 finderUserName:(id)arg7 isAudience:(_Bool)arg8 lastBuffer:(id)arg9 liveCookies:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

