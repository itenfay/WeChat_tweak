//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem, WCFinderLiveAudienceComodityLogReporter;

@interface WCFinderLiveOrderCenterReporter : NSObject
{
    WCFinderDataItem *_finderDataItem;
    WCFinderLiveAudienceComodityLogReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
- (void)reportEvent:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic) NSString *entrySource;
- (id)initWithFinderDataItem:(id)arg1 underlyingReporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

