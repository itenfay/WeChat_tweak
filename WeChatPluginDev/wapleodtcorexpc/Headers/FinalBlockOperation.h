//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@interface FinalBlockOperation : NSOperation
{
    CDUnknownBlockType _mainBlock;
    CDUnknownBlockType _finalBlock;
    struct atomic_flag _executed;
}

- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (void)executeFinalOnce;
- (id)initWithMainBlock:(CDUnknownBlockType)arg1 finalBlock:(CDUnknownBlockType)arg2;

@end

