//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMECCustomerSearchOrderListCGI
{
    unsigned int _offset;
    unsigned int _pageSize;
    NSString *_keyword;
    NSString *_filteringAppId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 pageSize:(unsigned int)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

