//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface RemoteControlActionReport
{
}

+ (void)ReportPrevTrack;
+ (void)ReportNextTrack;
+ (void)ReportStop;
+ (void)ReportPause;
+ (void)ReportPlay;
+ (void)ReportFinishRecordForWXTalk;
+ (void)ReportBeginRecordForWXTalk;
+ (void)ReportFinishRecordForChat;
+ (void)ReportBeginRecordForChat;
+ (void)reportDataForAction:(unsigned int)arg1 scene:(unsigned int)arg2;

@end

