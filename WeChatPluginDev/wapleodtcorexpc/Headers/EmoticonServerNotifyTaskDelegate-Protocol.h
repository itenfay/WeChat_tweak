//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonServerNotifyTask;

@protocol EmoticonServerNotifyTaskDelegate <NSObject>
- (void)onLogicDidResumed:(EmoticonServerNotifyTask *)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(EmoticonServerNotifyTask *)arg1;
@end

