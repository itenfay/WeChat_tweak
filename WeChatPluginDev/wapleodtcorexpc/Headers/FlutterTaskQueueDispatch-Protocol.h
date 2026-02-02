//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "FlutterTaskQueue-Protocol.h"

@protocol FlutterTaskQueueDispatch <FlutterTaskQueue>
- (void)dispatch:(void (^)(void))arg1;
@end

