//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController;

@interface WebViewControllerWeakWrapper : NSObject
{
    MMWebViewController *_viewController;
}

+ (id)wrapperWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMWebViewController *viewController; // @synthesize viewController=_viewController;

@end

