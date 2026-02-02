//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class UIViewController;

@interface WCAdCustomerServiceSignUserData : NSObject
{
    UIViewController *_viewController;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

@end
