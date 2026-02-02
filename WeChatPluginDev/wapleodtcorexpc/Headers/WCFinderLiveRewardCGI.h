//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, PackageResourceInfo_ProductBatchInfo, WCFinderDataItem;

@interface WCFinderLiveRewardCGI
{
    _Bool _comboFinished;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    int _rewardType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSString *_rewardRecipientUserName;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    NSString *_styleId;
    NSString *_rewardRequestId;
    NSData *_liveCookies;
    NSString *_sessionBuffer;
    NSData *_rewardExtInfo;
    NSMutableArray *_prepareBuf;
    PackageResourceInfo_ProductBatchInfo *_batchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PackageResourceInfo_ProductBatchInfo *batchInfo; // @synthesize batchInfo=_batchInfo;
@property(retain, nonatomic) NSMutableArray *prepareBuf; // @synthesize prepareBuf=_prepareBuf;
@property(retain, nonatomic) NSData *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(nonatomic) int rewardType; // @synthesize rewardType=_rewardType;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool comboFinished; // @synthesize comboFinished=_comboFinished;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *rewardRequestId; // @synthesize rewardRequestId=_rewardRequestId;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(copy, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(copy, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(copy, nonatomic) NSString *rewardRecipientUserName; // @synthesize rewardRecipientUserName=_rewardRecipientUserName;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 rewardType:(int)arg3 rewardRecipientUserName:(id)arg4 rewardComboId:(id)arg5 rewardProductId:(id)arg6 styleId:(id)arg7 rewardProductCount:(unsigned int)arg8 rewardAmountInWecoin:(unsigned int)arg9 requestId:(id)arg10 comboFinished:(_Bool)arg11 sessionBuffer:(id)arg12 rewardExtInfo:(id)arg13 rewardPrepareBuff:(id)arg14 batchInfo:(id)arg15 successBlock:(CDUnknownBlockType)arg16 failBlock:(CDUnknownBlockType)arg17;
- (id)initWithFinderTaskId:(id)arg1 rewardParams:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

