//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryCreateInfo, NSData, WCFinderDataItem;

@interface WCFinderLiveCreateLotteryCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    MMFinderLiveLotteryCreateInfo *_createInfo;
    long long _optype;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) long long optype; // @synthesize optype=_optype;
@property(retain, nonatomic) MMFinderLiveLotteryCreateInfo *createInfo; // @synthesize createInfo=_createInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLotteryCreateInfo:(id)arg1 finderDataItem:(id)arg2 optype:(long long)arg3 liveCookies:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

