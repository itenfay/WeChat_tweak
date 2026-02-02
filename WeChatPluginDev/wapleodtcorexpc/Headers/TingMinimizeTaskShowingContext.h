//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController;

@interface TingMinimizeTaskShowingContext : NSObject
{
    _Bool _bJustReload;
    UIViewController *_nextVC;
}

+ (id)contextWithNextVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool bJustReload; // @synthesize bJustReload=_bJustReload;
@property(nonatomic) __weak UIViewController *nextVC; // @synthesize nextVC=_nextVC;

@end

