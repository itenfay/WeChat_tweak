//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol EditImageInitialViewDelegate <NSObject>
- (UIViewController *)currentViewController;
- (void)getOriginalImage:(void (^)(UIImage *, NSData *))arg1;
- (void)getDisplayImage:(void (^)(UIImage *, NSMutableArray *, _Bool))arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
@end

