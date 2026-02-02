//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayPaidDetailQueryAwardCgiDelegate;

@interface WCPayPaidDetailQueryAwardCgi
{
    NSString *_activityId;
    NSString *_awardId;
    NSString *_sendRecordId;
    NSString *_userRecordId;
    NSString *_reqKey;
    NSString *_transactionId;
    NSString *_activityMchId;
    NSString *_activityType;
    id <WCPayPaidDetailQueryAwardCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPaidDetailQueryAwardCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *activityMchId; // @synthesize activityMchId=_activityMchId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) NSString *userRecordId; // @synthesize userRecordId=_userRecordId;
@property(retain, nonatomic) NSString *sendRecordId; // @synthesize sendRecordId=_sendRecordId;
@property(retain, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void)callErrorDelegate;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

