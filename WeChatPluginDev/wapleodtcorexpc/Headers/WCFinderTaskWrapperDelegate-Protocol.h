//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderTaskWrapper;

@protocol WCFinderTaskWrapperDelegate <NSObject>
- (void)onTaskFullFill:(WCFinderTaskWrapper *)arg1 finishBlock:(void (^)(NSObject *))arg2;
- (void)onTaskFinish:(WCFinderTaskWrapper *)arg1;
@end

