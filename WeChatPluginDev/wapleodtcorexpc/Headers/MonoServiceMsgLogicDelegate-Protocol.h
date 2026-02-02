//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MonoServiceMsgLogicDelegate <NSObject>
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;

@optional
- (void)didMonoServiceRejectMsg;
@end

