//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface PublicWifiHelper
{
}

+ (_Bool)isNeedSpecialHandling;
+ (_Bool)isWifiConnected;
+ (void)logClickCompleteButtonOfCompletePageWithAPMac:(id)arg1 followBrand:(int)arg2 protoType:(int)arg3;
+ (void)logCloseGuidePageOfProtoFourWithAPMac:(id)arg1;
+ (void)logCloseGuidePageOfProtoOneWithAPMac:(id)arg1;
+ (int)getSvrTypeFromWifiScene:(unsigned int)arg1;
+ (id)stringForNow;
+ (id)genSessionKey;

@end

