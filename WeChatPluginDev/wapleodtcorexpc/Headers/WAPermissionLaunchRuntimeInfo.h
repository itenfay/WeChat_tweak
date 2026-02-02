//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPermissionLaunchRuntimeInfo : NSObject
{
    _Bool _canShowStartWording;
    unsigned int _blockReason;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_canShowStartWording;
+ (void)PBArrayAdd_blockReason;
@property(nonatomic) _Bool canShowStartWording; // @synthesize canShowStartWording=_canShowStartWording;
@property(nonatomic) unsigned int blockReason; // @synthesize blockReason=_blockReason;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

