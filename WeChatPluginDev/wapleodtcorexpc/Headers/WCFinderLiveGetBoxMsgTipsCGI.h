//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;

@interface WCFinderLiveGetBoxMsgTipsCGI
{
    NSData *_liveCookies;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSData *_lastBuffer;
    NSMutableArray *_boxList;
    NSString *_finderUsername;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSMutableArray *boxList; // @synthesize boxList=_boxList;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)configBoxIdList;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 boxList:(id)arg3 objectId:(unsigned long long)arg4 liveId:(unsigned long long)arg5 finderUsername:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

