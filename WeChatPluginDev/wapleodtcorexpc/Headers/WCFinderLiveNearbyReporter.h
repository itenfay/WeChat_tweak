//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveNearbyReporter : NSObject
{
    NSString *m_sessionId;
    NSString *m_clickId;
    unsigned long long m_pageType;
    _Bool m_isInHalfPage;
}

- (void).cxx_destruct;
- (void)reportNearbyStartLiveAction:(unsigned long long)arg1;
- (void)reportNearbyStartLiveClick:(unsigned long long)arg1;
- (void)onNearbyStartLiveAction:(unsigned long long)arg1;
- (void)onNearbyStartLiveClick:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

