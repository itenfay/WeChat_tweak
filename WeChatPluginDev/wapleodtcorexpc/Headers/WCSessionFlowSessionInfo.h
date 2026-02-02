//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionFlowSessionInfo
{
    unsigned int _seq;
    NSString *_sessionId;
    NSString *_lastSessionId;
    NSString *_prePage;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    NSString *_pageName;
    unsigned long long _hashCode;
    NSString *_sid;
    NSMutableArray *_pagePaths;
    NSMutableArray *_markPagePathInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *markPagePathInfos; // @synthesize markPagePathInfos=_markPagePathInfos;
@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths=_pagePaths;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) unsigned long long hashCode; // @synthesize hashCode=_hashCode;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *prePage; // @synthesize prePage=_prePage;
@property(retain, nonatomic) NSString *lastSessionId; // @synthesize lastSessionId=_lastSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getSessionPagePathsAttrDictionary;
- (id)getSessionSingleAttrDictionary;
- (id)toString;
- (id)init;

@end

