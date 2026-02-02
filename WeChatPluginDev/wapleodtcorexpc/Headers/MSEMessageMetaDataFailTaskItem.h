//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEMessageMetaDataFailTaskItem : NSObject
{
    NSString *_sessionID;
    NSString *_taskID;
}

+ (void)initialize;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_sessionID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

