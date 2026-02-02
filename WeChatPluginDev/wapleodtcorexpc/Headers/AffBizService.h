//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AffBizCgiProxy, NSString;

@interface AffBizService
{
    AffBizCgiProxy *_cgiProxy;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) AffBizCgiProxy *cgiProxy; // @synthesize cgiProxy=_cgiProxy;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)setProxyIlink:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

