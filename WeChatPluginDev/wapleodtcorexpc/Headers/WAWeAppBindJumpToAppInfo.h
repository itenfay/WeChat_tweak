//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAWeAppBindJumpToAppInfo : NSObject
{
    NSString *_jumpToAppID;
    NSString *_jumpToUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_jumpToUserName;
+ (void)PBArrayAdd_jumpToAppID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpToUserName; // @synthesize jumpToUserName=_jumpToUserName;
@property(retain, nonatomic) NSString *jumpToAppID; // @synthesize jumpToAppID=_jumpToAppID;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

