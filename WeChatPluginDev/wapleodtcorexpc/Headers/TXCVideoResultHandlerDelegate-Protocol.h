//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TXCVideoFrame, TXCVideoResultHandler;

@protocol TXCVideoResultHandlerDelegate <NSObject>
- (void)resultHandler:(TXCVideoResultHandler *)arg1 didProcessVideoFrame:(TXCVideoFrame *)arg2;
- (void)resultHandler:(TXCVideoResultHandler *)arg1 onError:(NSError *)arg2;
@end

