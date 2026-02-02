//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayIdKeyRegularReporter : NSObject
{
    unsigned int _m_idBase;
    unsigned int _m_KeyBase;
    NSString *_m_logKey;
    unsigned long long _m_timeInternal;
    unsigned long long _m_startTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_startTime; // @synthesize m_startTime=_m_startTime;
@property(nonatomic) unsigned long long m_timeInternal; // @synthesize m_timeInternal=_m_timeInternal;
@property(nonatomic) unsigned int m_KeyBase; // @synthesize m_KeyBase=_m_KeyBase;
@property(nonatomic) unsigned int m_idBase; // @synthesize m_idBase=_m_idBase;
@property(retain, nonatomic) NSString *m_logKey; // @synthesize m_logKey=_m_logKey;
- (void)uploadIdKeyWithKey:(unsigned int)arg1;
- (void)reportConsumeZone;
- (void)reportFailedCount;
- (void)reportSuccessCount;
- (void)reportCount;
- (id)init;

@end

