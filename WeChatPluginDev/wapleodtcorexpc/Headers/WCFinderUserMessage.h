//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderUserMessage : NSObject
{
    unsigned long long _originFansCount;
    unsigned long long _followingCount;
    unsigned long long _addFansCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_addFansCount;
+ (void)PBArrayAdd_followingCount;
+ (void)PBArrayAdd_originFansCount;
@property(nonatomic) unsigned long long addFansCount; // @synthesize addFansCount=_addFansCount;
@property(nonatomic) unsigned long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) unsigned long long originFansCount; // @synthesize originFansCount=_originFansCount;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

