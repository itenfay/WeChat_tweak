//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WXGLACCommon : NSObject
{
    unsigned long long m_heartBeatInterval;
    unsigned long long m_slowCutInterval;
    unsigned long long m_slowGapSpeed;
    NSArray *m_resendIntervalArray;
    double m_testSpeedDiff;
    _Bool m_detectReach;
    _Bool m_testSpeedOpen;
}

+ (id)getSafeDeviceName;
+ (_Bool)isTestSpeedPacket:(id)arg1;
+ (unsigned int)getTestPacketLength;
+ (id)getTestSpeedPacket;
+ (unsigned int)getTestCount;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)testSpeedOpen;
- (id)getResendTimeIntervalArray;
- (double)getTestSpeedDiff;
- (_Bool)getClientDetectReach;
- (unsigned long long)getSlowGapSpeed;
- (unsigned long long)getSlowCutInterval;
- (unsigned long long)getHeartBeatInterval;
- (id)init;

@end

