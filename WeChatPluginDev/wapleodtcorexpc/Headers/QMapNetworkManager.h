//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexSet, QFoundationDataSafetyRules, QMapNetworkDomainProxy, QMapNetworkProcessorQueue, QMapNetworkSessionPool;

@interface QMapNetworkManager : NSObject
{
    QMapNetworkDomainProxy *_proxier;
    QMapNetworkProcessorQueue *_processorQueue;
    QFoundationDataSafetyRules *_dataSafetyRules;
    QMapNetworkSessionPool *_sessionPool;
    NSIndexSet *_acceptableStatusCodes;
}

+ (id)manager;
+ (id)managerWithConnectionProxyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(retain, nonatomic) QMapNetworkSessionPool *sessionPool; // @synthesize sessionPool=_sessionPool;
@property(retain) QFoundationDataSafetyRules *dataSafetyRules; // @synthesize dataSafetyRules=_dataSafetyRules;
@property(retain) QMapNetworkProcessorQueue *processorQueue; // @synthesize processorQueue=_processorQueue;
@property(retain) QMapNetworkDomainProxy *proxier; // @synthesize proxier=_proxier;
- (void)dealloc;
- (id)initWithConnectionProxyDictionary:(id)arg1;
- (void)replaceRequestURL:(id)arg1 host:(id)arg2 hostRange:(struct _NSRange)arg3 request:(id)arg4;
- (id)PUTRequest:(id)arg1 fromData:(id)arg2 orFromURL:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)sendRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)onComplete:(id)arg1 error:(id)arg2 failure:(CDUnknownBlockType)arg3 request:(id)arg4 response:(id)arg5 success:(CDUnknownBlockType)arg6;
- (id)POSTRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)POST:(id)arg1 postBody:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)GETRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)GET:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getNetworkErrorLocalizedDescription:(id)arg1;

@end

