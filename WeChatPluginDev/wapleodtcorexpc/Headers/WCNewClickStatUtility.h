//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCNewClickStatUtility
{
}

+ (id)getCalcSessionType:(id)arg1;
+ (id)getWidgetRecordDataFileByPageID:(id)arg1 andTimeStamp:(unsigned int)arg2;
+ (id)getWidgetRecordDataDir;
+ (unsigned int)calCostTimeFrom:(struct timeval)arg1;
+ (unsigned int)getNewContexID:(unsigned int)arg1;
+ (id)shortenPageID:(id)arg1;
+ (id)getPageStatDataCheckFilePath;
+ (void)unCompressSrcDataWithLen:(id)arg1 dest:(id)arg2 length:(long long)arg3;
+ (unsigned int)UinHash:(unsigned int)arg1;
+ (id)getReportConfigFilePath;
+ (id)getUsrReportDataDir;
+ (id)getReportDataDir;

@end

