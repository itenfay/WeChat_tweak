//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;
@protocol MMLiveOnlineUserLogicDelegate;

@interface MMLiveOnlineUserLogic : NSObject
{
    MMLiveTaskId *_taskId;
    id <MMLiveOnlineUserLogicDelegate> _logicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveOnlineUserLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)kickAudience:(id)arg1;
- (_Bool)fetchOnlineUserList;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end

