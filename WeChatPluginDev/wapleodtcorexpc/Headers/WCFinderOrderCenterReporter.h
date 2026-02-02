//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveAudienceComodityLogReporter;

@interface WCFinderOrderCenterReporter : NSObject
{
    WCFinderLiveAudienceComodityLogReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter; // @synthesize reporter=_reporter;
- (void)reportEvent:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic) NSString *entrySource;
- (id)initWithUnderlyingReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

