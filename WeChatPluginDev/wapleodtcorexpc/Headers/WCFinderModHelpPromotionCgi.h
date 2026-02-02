//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderModHelpPromotionCgi
{
    unsigned int _opType;
    NSString *_username;
    NSString *_feedId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithOpType:(unsigned int)arg1 feedId:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

