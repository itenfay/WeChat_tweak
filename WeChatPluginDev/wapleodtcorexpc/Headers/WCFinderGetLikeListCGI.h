//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, NSData, NSString;

@interface WCFinderGetLikeListCGI
{
    int _tabType;
    NSString *_targetUsername;
    NSString *_lastDisplayId;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuff;
    FinderClientStatus *_clientStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *lastDisplayId; // @synthesize lastDisplayId=_lastDisplayId;
@property(copy, nonatomic) NSString *targetUsername; // @synthesize targetUsername=_targetUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithScene:(int)arg1;
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 scene:(int)arg3 tabType:(int)arg4 clientStatus:(id)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 scene:(int)arg3 clientStatus:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)initWithLastBuff:(id)arg1 targetUsername:(id)arg2 clientStatus:(id)arg3 scene:(int)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

