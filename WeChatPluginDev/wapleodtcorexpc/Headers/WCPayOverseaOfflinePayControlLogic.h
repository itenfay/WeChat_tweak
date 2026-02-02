//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayOverseaGetOfflinePayUrlCgi;

@interface WCPayOverseaOfflinePayControlLogic
{
    WCPayOverseaGetOfflinePayUrlCgi *_getOfflinePayUrlCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaGetOfflinePayUrlCgi *getOfflinePayUrlCgi; // @synthesize getOfflinePayUrlCgi=_getOfflinePayUrlCgi;
- (void)call:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseOK:(id)arg1;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

