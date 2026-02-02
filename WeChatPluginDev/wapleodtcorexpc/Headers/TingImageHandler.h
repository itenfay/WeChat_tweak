//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingImageHandler : NSObject
{
    id _observer;
    CDUnknownBlockType _completion;
}

+ (id)handlerWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;

@end

