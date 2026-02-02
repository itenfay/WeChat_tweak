//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCBaseCgi;

@interface WCCgiBlockHelper : NSObject
{
    WCBaseCgi *_baseCgi;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (id)helperWithInitBlock:(CDUnknownBlockType)arg1 startBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCBaseCgi *baseCgi; // @synthesize baseCgi=_baseCgi;
- (void)baseCgi:(id)arg1 didFailWithError:(id)arg2 response:(id)arg3;
- (void)baseCgi:(id)arg1 didGetResponseData:(id)arg2;
- (void)baseCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)userDataForBaseCgi:(id)arg1;
- (void)removeCallBack;
- (void)callFailWithResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

