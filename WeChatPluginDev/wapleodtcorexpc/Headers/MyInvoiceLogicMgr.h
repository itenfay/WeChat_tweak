//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MyInvoiceLogicMgr
{
}

+ (_Bool)getSettingData;
+ (_Bool)saveSettingData:(_Bool)arg1;
+ (id)getInvoiceSettingConfinPath;
+ (id)getInvoiceSettingConfigRootDir;
+ (void)ReportInvoiceClick:(long long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DeleteInvoiceInfo:(unsigned int)arg1;
- (void)SaveInvoiceInfo:(id)arg1;
- (void)GetInvoiceInfo:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

