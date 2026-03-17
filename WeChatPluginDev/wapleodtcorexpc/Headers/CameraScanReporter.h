//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanReporter : NSObject
{
}

+ (void)reportGoodScanResultPageOpType:(unsigned long long)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4;
+ (void)reportCloseGoodScanResultPage:(long long)arg1 enterTimeStampInMS:(unsigned long long)arg2 closeTimeStampInMS:(unsigned long long)arg3 enterSessionID:(unsigned int)arg4 tabSessionID:(unsigned int)arg5 scanSessionID:(unsigned int)arg6 businessType:(long long)arg7 businessSubType:(long long)arg8 businessID:(id)arg9 businessInfo:(id)arg10;
+ (void)reportCameraPageEvent:(long long)arg1 scanType:(long long)arg2 tabSessionID:(unsigned int)arg3 uiSessionID:(unsigned int)arg4;
+ (void)reportScanGoodsAIEngineInfo:(id)arg1 resultAction:(long long)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4;
+ (void)reportScanGoodsTimeConsuming:(long long)arg1 resultType:(long long)arg2 startTimeStamp:(unsigned long long)arg3 stopTimeStamp:(unsigned long long)arg4 tabSessionID:(unsigned int)arg5 scanSessionID:(unsigned int)arg6;
+ (void)reportScanGoodsResult:(long long)arg1 resultAction:(long long)arg2 enterSessionID:(unsigned int)arg3 tabSessionID:(unsigned int)arg4 scanSessionID:(unsigned int)arg5 businessType:(long long)arg6 businessSubType:(long long)arg7 businessID:(id)arg8 businessInfo:(id)arg9;
+ (void)reportSingleCodeShowResultOrMultiCodeViewShowSessionid:(unsigned long long)arg1 allIconNum:(unsigned long long)arg2 recIconNum:(unsigned long long)arg3 scene:(unsigned long long)arg4;
+ (void)reportScanMultiCodesMarkDotInfoList:(id)arg1 resultOpType:(unsigned int)arg2 selectedIndex:(long long)arg3 tabSessionID:(unsigned int)arg4 scanSessionID:(unsigned int)arg5 clientDetectCostTime:(unsigned long long)arg6 reportScene:(long long)arg7 isCombine:(_Bool)arg8 uiSessionID:(unsigned int)arg9 expoFrom:(unsigned long long)arg10 maskExitType:(unsigned int)arg11;
+ (void)reportScanMultiCodesMarkDotInfoList:(id)arg1 resultOpType:(unsigned int)arg2 selectedIndex:(long long)arg3 tabSessionID:(unsigned int)arg4 scanSessionID:(unsigned int)arg5 clientDetectCostTime:(unsigned long long)arg6 reportScene:(long long)arg7 isCombine:(_Bool)arg8 uiSessionID:(unsigned int)arg9;
+ (void)reportSwitchToTab:(long long)arg1 tabAction:(long long)arg2 tabSessionID:(unsigned int)arg3 uiSessionID:(unsigned int)arg4;
+ (void)reportScanPageExposureType:(long long)arg1 enterSessionID:(unsigned int)arg2 currentTab:(long long)arg3 enterTimeStampInMS:(unsigned long long)arg4 exitTimeStampInMS:(unsigned long long)arg5 enterScene:(unsigned long long)arg6 businessID:(id)arg7 businessInfo:(id)arg8;
+ (void)reportIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;

@end

