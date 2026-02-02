//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMECCustomerGetOrderListCGI
{
    unsigned int _orderType;
    unsigned int _evaluationStatus;
    unsigned int _pageSize;
    NSString *_filteringAppId;
    NSString *_lastIndex;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *lastIndex; // @synthesize lastIndex=_lastIndex;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(nonatomic) unsigned int evaluationStatus; // @synthesize evaluationStatus=_evaluationStatus;
@property(nonatomic) unsigned int orderType; // @synthesize orderType=_orderType;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 pageSize:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (id)initWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

