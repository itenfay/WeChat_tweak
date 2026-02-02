//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MemoryStatAutoDumpConfig : NSObject
{
    _Bool _enabled;
    _Bool _uploadReport;
    int _internal;
    int _threshold;
}

+ (void)initialize;
+ (void)PBArrayAdd_uploadReport;
+ (void)PBArrayAdd_threshold;
+ (void)PBArrayAdd_internal;
+ (void)PBArrayAdd_enabled;
@property(nonatomic) int threshold; // @synthesize threshold=_threshold;
@property(nonatomic) int internal; // @synthesize internal=_internal;
@property(nonatomic) _Bool uploadReport; // @synthesize uploadReport=_uploadReport;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

