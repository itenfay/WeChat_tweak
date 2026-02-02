//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WARequestTask;

@protocol WARequestTaskDelegate <NSObject>
- (void)requestTaskDidEnd:(WARequestTask *)arg1;
@end

