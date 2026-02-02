//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BankCardOcrEncryptData, NSArray, NSData, NSMutableData, NSMutableURLRequest, NSString, NSURL, NSURLSession, OcrGetBankCardInfoWechatRegResp;
@protocol WCPayBizeOcrImageHttpDegelate;

@interface WCPayBizOcrImageHttp : NSObject
{
    NSString *TAG;
    unsigned int _source;
    unsigned int _seqNum;
    NSURLSession *m_session;
    NSMutableURLRequest *m_request;
    NSMutableData *m_responseData;
    id <WCPayBizeOcrImageHttpDegelate> _m_delegate;
    NSString *_sessionKey;
    NSURL *_httpUrl;
    NSData *_imageData;
    NSData *_certPem;
    NSString *_baseRequest;
    NSArray *_sm2Key;
    OcrGetBankCardInfoWechatRegResp *_processResponse;
    BankCardOcrEncryptData *_bankcard_res;
}

- (void).cxx_destruct;
@property(copy, nonatomic) BankCardOcrEncryptData *bankcard_res; // @synthesize bankcard_res=_bankcard_res;
@property(copy, nonatomic) OcrGetBankCardInfoWechatRegResp *processResponse; // @synthesize processResponse=_processResponse;
@property(copy, nonatomic) NSArray *sm2Key; // @synthesize sm2Key=_sm2Key;
@property(retain, nonatomic) NSString *baseRequest; // @synthesize baseRequest=_baseRequest;
@property(copy, nonatomic) NSData *certPem; // @synthesize certPem=_certPem;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSURL *httpUrl; // @synthesize httpUrl=_httpUrl;
@property(nonatomic) unsigned int seqNum; // @synthesize seqNum=_seqNum;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(nonatomic) __weak id <WCPayBizeOcrImageHttpDegelate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=m_responseData;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=m_request;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=m_session;
- (id)getSM2Encrpt;
- (void)start;
- (void)onServiceInit;
- (id)initWithImage:(id)arg1 delegate:(id)arg2 source:(unsigned int)arg3 seqNum:(unsigned int)arg4 sessionKey:(id)arg5 certPem:(id)arg6 baseRequest:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

