//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAPermissionWeAppBindInfo : NSObject
{
    NSMutableArray *_arrJumpToAppInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_arrJumpToAppInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrJumpToAppInfo; // @synthesize arrJumpToAppInfo=_arrJumpToAppInfo;
- (id)archivedWCTValue;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

