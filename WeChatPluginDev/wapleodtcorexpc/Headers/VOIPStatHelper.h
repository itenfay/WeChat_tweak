//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPStatHelper : NSObject
{
}

+ (void)reportDoubleLinkToast:(long long)arg1 scene:(long long)arg2 expose:(_Bool)arg3 click:(_Bool)arg4;
+ (id)Gen11123Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)Gen12805Log:(id)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GenAVQualityExtLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2;
+ (id)GetChannelLog:(struct NewDirectReport *)arg1 withRelayReportV2:(struct NewRelayReport *)arg2 withDialReport:(void *)arg3;
+ (id)GetChannelTcpLog:(struct RelayTcpReport *)arg1 tcpSwitchCnt:(unsigned int)arg2 withDialReport:(void *)arg3 withRelayReportV2:(struct NewRelayReport *)arg4 withDirectReportV2:(struct NewDirectReport *)arg5;
+ (id)GenAVQualityLog:(struct tagAVQualityReportInfo *)arg1 extAVReport:(struct NewAVExtReport_t *)arg2 androidReport:(struct AndroidReport_t *)arg3;
+ (id)GenNewDialLog:(void *)arg1 androidReport:(struct AndroidReport_t *)arg2;

@end

