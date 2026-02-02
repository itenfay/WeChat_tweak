//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PKAddPassesViewController;

@interface WAJSContextPlugin_PassKit
{
    _Bool _isPAPUIOn;
    _Bool _isPAPUIActionBlocked;
    PKAddPassesViewController *_retainAssesViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKAddPassesViewController *retainAssesViewController; // @synthesize retainAssesViewController=_retainAssesViewController;
@property(nonatomic) _Bool isPAPUIActionBlocked; // @synthesize isPAPUIActionBlocked=_isPAPUIActionBlocked;
@property(nonatomic) _Bool isPAPUIOn; // @synthesize isPAPUIOn=_isPAPUIOn;
- (void)tryReleaseWeAppAddPassViewController;
- (_Bool)tryRetainWeAppAddPassViewController;
- (void)unablePAPUI;
- (_Bool)tryEnablePAPUI;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;

@end

