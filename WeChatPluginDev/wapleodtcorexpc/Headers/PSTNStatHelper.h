//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PSTNStatHelper : NSObject
{
}

+ (id)GenPSTNEngineLog:(struct CommonReport_t *)arg1 avQualityLog:(struct tagAVQualityReportInfo *)arg2;
+ (id)GenPSTNChannelLog:(struct CommonReport_t *)arg1 newRelayRepo:(struct NewRelayReport *)arg2;
+ (id)GenPSTNClientLog:(struct CommonReport_t *)arg1 clientRepo:(struct ClientReport_t *)arg2 androidReport:(struct PstnAndroidReport_t *)arg3;

@end

