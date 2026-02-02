//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderMemberShipModBlackListCGI
{
    int _opType;
    int _acctType;
    NSString *_finderUsername;
    long long _objectId;
    long long _commenTid;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int acctType; // @synthesize acctType=_acctType;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(nonatomic) long long commenTid; // @synthesize commenTid=_commenTid;
@property(nonatomic) long long objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 objectId:(unsigned long long)arg2 commenTid:(unsigned long long)arg3 opType:(int)arg4 acctType:(int)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

