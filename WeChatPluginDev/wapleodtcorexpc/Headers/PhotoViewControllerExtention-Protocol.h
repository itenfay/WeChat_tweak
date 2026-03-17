//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol PhotoViewControllerExtention <NSObject>

@optional
- (void)PhotoViewControllerWillBePoped;
- (void)PhotoViewControllerWillBePushed;
- (void)PhotoViewControllerWillBeDismissed;
- (void)PhotoViewControllerWillBePresent;
@end

