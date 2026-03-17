//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol IWAFileLogicController;

@protocol IWAFileViewService <NSObject>
- (void)addToFavoritesWithPath:(NSString *)arg1;
- (void)forwardMessageWithPath:(NSString *)arg1;
- (void)setCurrentViewController:(UIViewController *)arg1;

@optional
+ (id <IWAFileLogicController>)generateFileLogicControllerWithPath:(NSString *)arg1;
@end

