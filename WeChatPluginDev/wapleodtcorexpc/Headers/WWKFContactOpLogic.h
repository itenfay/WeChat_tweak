//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WWKFContactOpLogic
{
    NSString *_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSyncContactDeleteOperationToSvr:(id)arg1;
- (void)requestUnBindWWKFContactWithUserName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)onSyncContactAddOperationToSvr:(id)arg1;
- (void)requestBindWWKFContact:(id)arg1 url:(id)arg2 shareTicket:(id)arg3 notifyCtx:(id)arg4 spamContext:(id)arg5 finderContext:(id)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (void)onFetchWWKFContactFromSvr:(id)arg1;
- (void)fetchWWKFContactFromSvr:(id)arg1 clientStatus:(id)arg2 scene:(int)arg3 spamContext:(id)arg4 finderContext:(id)arg5 completeBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (id)clientStatusForUserName:(id)arg1;
- (void)fetchWWKFContactWithUrl:(id)arg1 scene:(int)arg2 spamContext:(id)arg3 finderContext:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFail:(CDUnknownBlockType)arg6;
- (void)fetchWWKFContactWithUserName:(id)arg1 scene:(int)arg2 onSuccess:(CDUnknownBlockType)arg3 onFail:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

