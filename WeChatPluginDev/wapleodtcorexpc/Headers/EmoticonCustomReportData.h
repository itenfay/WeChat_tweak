//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonCustomReportData
{
}

+ (void)ReportCustomEmoticonCountWhenStartRecover:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
+ (void)ReportEmoticonCustomManageEnterFromOverLimitTips;
+ (void)ReportEmoticonCustomManageEnterFromCell;
+ (void)ReportEmoticonCustomManageEditClick;
+ (void)ReportEmoticonCustomManageAddClick;
+ (void)ReportAutoStartSyncOfType:(unsigned long long)arg1;
+ (void)ReportHasEmoticonToSyncOfType:(unsigned long long)arg1;
+ (void)ReportEmoticonBoardCustomEmojiShow:(unsigned long long)arg1;
+ (id)ReportStringForEmoticonSyncOfAction:(unsigned long long)arg1 andType:(unsigned long long)arg2;
+ (void)ReportEmoticonTabEntranceClick;
+ (void)ReportCustomEmoticonManageIconClick;
+ (void)ReportCustomEmoticonTabClick;

@end

