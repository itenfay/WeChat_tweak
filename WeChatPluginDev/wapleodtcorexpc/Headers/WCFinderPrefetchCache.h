//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WXPBGeneratedMessage;

@interface WCFinderPrefetchCache : NSObject
{
    WXPBGeneratedMessage *_request;
    WXPBGeneratedMessage *_response;
    unsigned long long _requestTime;
    unsigned long long _responseTime;
    unsigned long long _expiredTime;
    NSData *_extraData;
    CDUnknownBlockType _responseBlock;
    NSString *_requestCls;
    NSData *_innerRequestData;
    NSString *_responseCls;
    NSData *_innerResponseData;
}

+ (void)initialize;
+ (void)PBArrayAdd_extraData;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_responseTime;
+ (void)PBArrayAdd_innerResponseData;
+ (void)PBArrayAdd_responseCls;
+ (void)PBArrayAdd_requestTime;
+ (void)PBArrayAdd_innerRequestData;
+ (void)PBArrayAdd_requestCls;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *innerResponseData; // @synthesize innerResponseData=_innerResponseData;
@property(copy, nonatomic) NSString *responseCls; // @synthesize responseCls=_responseCls;
@property(retain, nonatomic) NSData *innerRequestData; // @synthesize innerRequestData=_innerRequestData;
@property(copy, nonatomic) NSString *requestCls; // @synthesize requestCls=_requestCls;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned long long responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) unsigned long long requestTime; // @synthesize requestTime=_requestTime;
@property(readonly, nonatomic) unsigned long long requestId;
@property(retain, nonatomic) WXPBGeneratedMessage *response; // @synthesize response=_response;
@property(retain, nonatomic) WXPBGeneratedMessage *request; // @synthesize request=_request;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

