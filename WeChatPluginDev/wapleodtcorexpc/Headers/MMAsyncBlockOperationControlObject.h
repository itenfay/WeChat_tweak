//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAsyncBlockOperationControlObject : NSObject
{
    _Bool _hasMarkFinished;
    CDUnknownBlockType _endBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType endBlock; // @synthesize endBlock=_endBlock;
@property(nonatomic) _Bool hasMarkFinished; // @synthesize hasMarkFinished=_hasMarkFinished;
- (void)configWithEndBlock:(CDUnknownBlockType)arg1;
- (void)markFinished;
- (void)dealloc;

@end

