//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HLCarriorInfo, NSData, NSDate, NSDictionary, NSError, NSString, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface HLLitePacket : NSObject
{
    _Bool _banReport;
    _Bool _finish;
    _Bool _inCall;
    long long _appID;
    unsigned long long _seq;
    double _timeout;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_httpURL;
    NSString *_httpMethod;
    NSDictionary *_httpReqHeaders;
    NSData *_httpBody;
    CDUnknownBlockType _callback;
    HLCarriorInfo *_carrior;
    NSDate *_firstInitDate;
    NSDate *_startDate;
    NSError *_reportError;
    long long _retryTimes;
    NSString *_serverIP;
    long long _recvlength;
    NSURLSessionDataTask *_task;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) long long recvlength; // @synthesize recvlength=_recvlength;
@property(retain, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) _Bool inCall; // @synthesize inCall=_inCall;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(retain, nonatomic) NSError *reportError; // @synthesize reportError=_reportError;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDate *firstInitDate; // @synthesize firstInitDate=_firstInitDate;
@property(retain, nonatomic) HLCarriorInfo *carrior; // @synthesize carrior=_carrior;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSDictionary *httpReqHeaders; // @synthesize httpReqHeaders=_httpReqHeaders;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *httpURL; // @synthesize httpURL=_httpURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool banReport; // @synthesize banReport=_banReport;
@property(readonly, nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
- (id)init;

@end

