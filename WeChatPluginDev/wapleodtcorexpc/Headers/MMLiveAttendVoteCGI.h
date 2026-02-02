//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSData, NSMutableArray, NSString;

@interface MMLiveAttendVoteCGI
{
    MMFinderLiveTaskId *_taskId;
    unsigned long long _objectId;
    NSMutableArray *_choiceIds;
    NSString *_nonceId;
    NSData *_cookies;
    NSString *_votingId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *votingId; // @synthesize votingId=_votingId;
@property(retain, nonatomic) NSData *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSMutableArray *choiceIds; // @synthesize choiceIds=_choiceIds;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 choiceIds:(id)arg4 cookies:(id)arg5 votingId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

