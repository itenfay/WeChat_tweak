//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VOIPMgrObserver <NSObject>
- (void)VOIPMgrDidReceiveRemotePixelBuffer:(struct __CVBuffer *)arg1;
- (void)VOIPMgrDidReceiveLocalPixelBuffer:(struct __CVBuffer *)arg1;
@end

