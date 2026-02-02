//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveOverReporter : NSObject
{
    NSString *m_sessionId;
}

- (void).cxx_destruct;
- (void)reportOverAction:(unsigned long long)arg1 withResult:(unsigned long long)arg2 actionResultDic:(id)arg3;
- (void)onOverAction:(unsigned long long)arg1 withResult:(unsigned long long)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

