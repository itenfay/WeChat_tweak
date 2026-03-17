//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TableSessionStorageSetting : NSObject
{
    _Bool _isHasRecord;
    unsigned int _sessionVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionVersion;
+ (void)PBArrayAdd_isHasRecord;
@property(nonatomic) unsigned int sessionVersion; // @synthesize sessionVersion=_sessionVersion;
@property(nonatomic) _Bool isHasRecord; // @synthesize isHasRecord=_isHasRecord;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

