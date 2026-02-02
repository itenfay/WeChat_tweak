//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionSpecialSessionData
{
    unsigned int _logID;
    NSString *_sid;
    NSString *_sessionId;
    NSString *_pageName;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    unsigned long long _hashcode;
    NSString *_finderContextID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSString *finderContextID; // @synthesize finderContextID=_finderContextID;
@property(nonatomic) unsigned long long hashcode; // @synthesize hashcode=_hashcode;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;

@end

