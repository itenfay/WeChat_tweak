//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMShareSessionList : NSObject
{
    NSArray *_sessionList;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sessionList; // @synthesize sessionList=_sessionList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

