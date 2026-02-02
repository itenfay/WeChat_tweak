//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSDate, NSMutableData, NSString, NSURLConnection, ProtobufCGIWrap;
@protocol NotifyFromPrtlDelegate;

@interface UrlChannel : NSObject
{
    unsigned int m_uiRetryCount;
    unsigned int m_uiChannelStatus;
    unsigned int m_uiRetStatusCode;
    unsigned int m_uiRetContentLength;
    unsigned long long m_ui64StartTime;
    unsigned long long m_ui64ConnectStartTime;
    unsigned long long m_ui64SendStartTime;
    unsigned long long m_ui64ReceiveStartTime;
    unsigned long long m_uiTimeOutInSec;
    NSString *m_lastRequestIp;
    _Bool m_bStopRetry;
    _Bool m_bForceStopTimer;
    unsigned int m_uiMaxRetryCount;
    ProtobufCGIWrap *m_wrapInfo;
    id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl;
    NSURLConnection *m_ucChannel;
    MMTimer *m_tmCheck;
    NSDate *m_tLastRecvData;
    NSMutableData *m_dtResponseData;
    NSString *m_nsIP;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_nsIP; // @synthesize m_nsIP;
@property(retain, nonatomic) NSMutableData *m_dtResponseData; // @synthesize m_dtResponseData;
@property(nonatomic) unsigned int m_uiMaxRetryCount; // @synthesize m_uiMaxRetryCount;
@property(retain, nonatomic) NSDate *m_tLastRecvData; // @synthesize m_tLastRecvData;
@property(retain, nonatomic) MMTimer *m_tmCheck; // @synthesize m_tmCheck;
@property(retain, nonatomic) NSURLConnection *m_ucChannel; // @synthesize m_ucChannel;
@property(nonatomic) __weak id <NotifyFromPrtlDelegate> m_delNotifyFromPrtl; // @synthesize m_delNotifyFromPrtl;
@property(retain, nonatomic) ProtobufCGIWrap *m_wrapInfo; // @synthesize m_wrapInfo;
- (void)onReceiveDataLength:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)CheckTimeOut;
- (void)Connect;
- (void)ResetChannel;
- (void)TryReportFailIP;
- (void)Stop;
- (_Bool)Start;
- (void)InitPrtl:(id)arg1;
- (void)dealloc;
- (id)init;

@end

