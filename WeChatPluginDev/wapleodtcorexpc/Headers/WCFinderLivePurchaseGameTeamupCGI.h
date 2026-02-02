//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderLivePurchaseGameTeamupCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    NSData *_rewardExtInfo;
    NSString *_sessionBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSData *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 rewardExtInfo:(id)arg3 sessionBuffer:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

