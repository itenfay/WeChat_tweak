//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveBoxId, NSData, NSString;

@interface WCFinderLiveGetFriendBoxLiveMsgCGI
{
    NSData *_liveCookies;
    NSData *_lastBuffer;
    FinderLiveBoxId *_boxId;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_finderUsername;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 lastBuffer:(id)arg3 boxId:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 finderUsername:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

