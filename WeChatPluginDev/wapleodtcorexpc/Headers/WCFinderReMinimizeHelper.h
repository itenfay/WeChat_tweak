//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSValue, UIViewController;

@interface WCFinderReMinimizeHelper : NSObject
{
    UIViewController *_relativeVC;
    CDUnknownBlockType _createTransationBlock;
    CDUnknownBlockType _validChecker;
    NSValue *_floatingViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *floatingViewFrame; // @synthesize floatingViewFrame=_floatingViewFrame;
@property(copy, nonatomic) CDUnknownBlockType validChecker; // @synthesize validChecker=_validChecker;
@property(copy, nonatomic) CDUnknownBlockType createTransationBlock; // @synthesize createTransationBlock=_createTransationBlock;
@property(nonatomic) __weak UIViewController *relativeVC; // @synthesize relativeVC=_relativeVC;

@end

