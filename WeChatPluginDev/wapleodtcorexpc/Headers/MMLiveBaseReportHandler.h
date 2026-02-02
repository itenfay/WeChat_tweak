//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveBaseReportHandler : NSObject
{
    _Bool _autoTackEvent;
    unsigned int _logId;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoTackEvent; // @synthesize autoTackEvent=_autoTackEvent;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int logId; // @synthesize logId=_logId;
- (void)report;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

