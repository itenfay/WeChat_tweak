//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderFetchFinderMemberShipQAListCGI
{
    int _getType;
    NSString *_finderUsername;
    NSString *_lastBuff;
    NSString *_objectId;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) int getType; // @synthesize getType=_getType;
@property(copy, nonatomic) NSString *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 lastBuff:(id)arg2 getType:(int)arg3 objectId:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

