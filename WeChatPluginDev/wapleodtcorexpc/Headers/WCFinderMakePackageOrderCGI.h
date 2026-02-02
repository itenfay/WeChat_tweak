//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem, WCFinderLiveMakePackageOrderParams;

@interface WCFinderMakePackageOrderCGI
{
    unsigned int _targetLevel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    unsigned long long _orderWecoinAmount;
    NSString *_orderRequestId;
    NSData *_liveCookies;
    WCFinderLiveMakePackageOrderParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveMakePackageOrderParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *orderRequestId; // @synthesize orderRequestId=_orderRequestId;
@property(nonatomic) unsigned long long orderWecoinAmount; // @synthesize orderWecoinAmount=_orderWecoinAmount;
@property(nonatomic) unsigned int targetLevel; // @synthesize targetLevel=_targetLevel;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

