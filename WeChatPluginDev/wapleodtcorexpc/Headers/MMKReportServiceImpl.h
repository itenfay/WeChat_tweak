//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKReportServiceImpl : NSObject
{
}

+ (void)reportAcf:(id)arg1 sessionId:(id)arg2;
- (id)getLastSessionInfo;
- (void)setLastSessionInfo:(id)arg1;
- (long long)svrTimeMs;
- (void)kvStat:(int)arg1 val:(id)arg2;
- (void)idkeyStat:(long long)arg1 key:(long long)arg2 val:(long long)arg3 isImportant:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

