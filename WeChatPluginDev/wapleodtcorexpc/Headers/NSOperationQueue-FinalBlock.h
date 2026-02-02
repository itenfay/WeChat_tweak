//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (FinalBlock)
+ (id)newSerialMainQueue;
- (id)addOperationWithMainBlock:(CDUnknownBlockType)arg1 finalBlock:(CDUnknownBlockType)arg2;
- (void)sc_addOperationWithAsyncBlock:(CDUnknownBlockType)arg1;
- (id)addOperationWithAsyncBlock:(CDUnknownBlockType)arg1;
@end

