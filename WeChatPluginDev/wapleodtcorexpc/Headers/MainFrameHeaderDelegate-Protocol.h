//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIViewController;

@protocol MainFrameHeaderDelegate <NSObject>
- (MMUIViewController *)getViewController;

@optional
- (void)OpenContactInfo:(NSString *)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(UIViewController *)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)insertRow:(unsigned int)arg1;
- (void)reloadAll;
@end

