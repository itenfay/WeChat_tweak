//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderOuterPreloadTask : NSObject
{
    NSString *_tid;
    unsigned long long _preloadPercent;
}

+ (void)initialize;
+ (void)PBArrayAdd_preloadPercent;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

