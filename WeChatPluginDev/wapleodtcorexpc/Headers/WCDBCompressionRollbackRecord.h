//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCDBCompressionRollbackRecord : NSObject
{
    NSMutableSet *_rollbackTags;
}

+ (void)initialize;
+ (void)PBArrayAdd_rollbackTags;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *rollbackTags; // @synthesize rollbackTags=_rollbackTags;
- (id)getPBPropertyTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

