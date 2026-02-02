//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGameLifeProfileJumpInfo : NSObject
{
    unsigned int _jumpType;
    NSString *_jumpUrl;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_jumpType;
+ (void)PBArrayAdd_jumpUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (id)initWithGameLifeJumpInfo:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

