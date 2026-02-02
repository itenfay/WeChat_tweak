//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderFetchFinderMemberCollectionShortInfoCGI
{
    NSString *_finderUsername;
    unsigned long long _collectionTopicId;
    NSString *_finderMemberTicket;
    NSData *_lastBuff;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) NSString *finderMemberTicket; // @synthesize finderMemberTicket=_finderMemberTicket;
@property(nonatomic) unsigned long long collectionTopicId; // @synthesize collectionTopicId=_collectionTopicId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 collectionTopicId:(unsigned long long)arg2 finderMemberTicket:(id)arg3 lastBuff:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

