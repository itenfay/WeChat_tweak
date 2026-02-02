//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FunctionNewXml : NSObject
{
    unsigned int _cmdid;
    unsigned int _opType;
    unsigned int _createTime;
    unsigned int _retryCount;
    unsigned int _maxRetryCount;
    unsigned int _retryInterval;
    unsigned int _reportid;
    unsigned int _successkey;
    unsigned int _failKey;
    unsigned int _finalFailKey;
    unsigned int _nextRetryTime;
    NSString *_cgiName;
    NSString *_cgiPath;
    NSString *_functionMsgId;
    unsigned long long _version;
    unsigned long long _businessId;
    NSString *_customBuff;
    NSData *_businessBuff;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessBuff;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_customBuff;
+ (void)PBArrayAdd_cgiPath;
+ (void)PBArrayAdd_cgiName;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_nextRetryTime;
+ (void)PBArrayAdd_finalFailKey;
+ (void)PBArrayAdd_failKey;
+ (void)PBArrayAdd_successkey;
+ (void)PBArrayAdd_reportid;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_cmdid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int nextRetryTime; // @synthesize nextRetryTime=_nextRetryTime;
@property(nonatomic) unsigned int finalFailKey; // @synthesize finalFailKey=_finalFailKey;
@property(nonatomic) unsigned int failKey; // @synthesize failKey=_failKey;
@property(nonatomic) unsigned int successkey; // @synthesize successkey=_successkey;
@property(nonatomic) unsigned int reportid; // @synthesize reportid=_reportid;
@property(nonatomic) unsigned int retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSData *businessBuff; // @synthesize businessBuff=_businessBuff;
@property(retain, nonatomic) NSString *customBuff; // @synthesize customBuff=_customBuff;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *functionMsgId; // @synthesize functionMsgId=_functionMsgId;
@property(nonatomic) unsigned int cmdid; // @synthesize cmdid=_cmdid;
@property(retain, nonatomic) NSString *cgiPath; // @synthesize cgiPath=_cgiPath;
@property(retain, nonatomic) NSString *cgiName; // @synthesize cgiName=_cgiName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

