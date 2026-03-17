//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidI64Callback;

@protocol MMIDeviceFrameDrawLoopCallback <NSObject>
- (void)stopListener;
- (void)startListenerImpl:(MMVoidI64Callback *)arg1;
@end

