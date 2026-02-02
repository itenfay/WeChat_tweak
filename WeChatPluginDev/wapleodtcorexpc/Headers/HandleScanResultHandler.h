//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetA8KeyLogic, NSString;

@interface HandleScanResultHandler : NSObject
{
    GetA8KeyLogic *_geta8KeyLogic;
}

- (_Bool)handleProlieScanResult:(id)arg1;
- (id)getScanResult;
- (id)getExtTaransLinkParams;
- (void)realHandleReqAfterermissionValidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

