//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CgiLiteAppInfo : NSObject
{
    unsigned int _itemType;
    NSString *_itemId;
    unsigned long long _eventTime;
    NSString *_sourcePageJson;
    NSString *_sessionId;
    NSString *_dataJson;
    NSString *_eventId;
    NSString *_curPageJson;
    NSString *_refPageJson;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *refPageJson; // @synthesize refPageJson=_refPageJson;
@property(retain, nonatomic) NSString *curPageJson; // @synthesize curPageJson=_curPageJson;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *dataJson; // @synthesize dataJson=_dataJson;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sourcePageJson; // @synthesize sourcePageJson=_sourcePageJson;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (_Bool)checkCanReort;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

