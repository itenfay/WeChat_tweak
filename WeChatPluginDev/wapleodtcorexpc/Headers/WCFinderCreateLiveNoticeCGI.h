//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, FinderLivePaymentSetting, NSArray, NSString;

@interface WCFinderCreateLiveNoticeCGI
{
    unsigned int _optype;
    NSString *_finderUserName;
    NSString *_delReason;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSArray *_couponsStockIDs;
    FinderLivePaymentSetting *_paymentSetting;
    unsigned long long _reportingSourceScene;
    NSString *_modReason;
    unsigned long long _modifyFieldFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long modifyFieldFlag; // @synthesize modifyFieldFlag=_modifyFieldFlag;
@property(copy, nonatomic) NSString *modReason; // @synthesize modReason=_modReason;
@property(nonatomic) unsigned long long reportingSourceScene; // @synthesize reportingSourceScene=_reportingSourceScene;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @synthesize paymentSetting=_paymentSetting;
@property(retain, nonatomic) NSArray *couponsStockIDs; // @synthesize couponsStockIDs=_couponsStockIDs;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(copy, nonatomic) NSString *delReason; // @synthesize delReason=_delReason;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUserName:(id)arg1 liveNoticeInfo:(id)arg2 optype:(unsigned int)arg3 paymentSetting:(id)arg4 couponsStockIDs:(id)arg5 delReason:(id)arg6 modifyReason:(id)arg7 modifyFieldFlag:(unsigned long long)arg8 reportingSourceScene:(unsigned long long)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;

@end

