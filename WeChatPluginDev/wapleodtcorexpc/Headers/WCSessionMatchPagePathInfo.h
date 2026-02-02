//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionMatchPagePathInfo
{
    NSString *_sessionId;
    NSString *_lastSessionId;
    NSString *_sid;
    NSString *_pagePathId;
    NSString *_sessionPageId;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    NSMutableArray *_pagePaths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths=_pagePaths;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *sessionPageId; // @synthesize sessionPageId=_sessionPageId;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSString *lastSessionId; // @synthesize lastSessionId=_lastSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttrDictionary;
- (id)toString;
- (id)init;

@end

