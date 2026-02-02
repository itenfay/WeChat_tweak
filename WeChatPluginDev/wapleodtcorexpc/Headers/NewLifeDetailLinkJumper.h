//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface NewLifeDetailLinkJumper : NSObject
{
    NSString *_linkURL;
    UIViewController *_viewController;
    unsigned long long _entryScene;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
- (int)commentScene;
- (void)performJump;
- (_Bool)valid;

@end

