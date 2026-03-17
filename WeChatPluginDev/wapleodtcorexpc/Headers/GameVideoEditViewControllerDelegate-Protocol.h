//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameVideoEditViewController, NSDictionary, NSError, NSString;

@protocol GameVideoEditViewControllerDelegate <NSObject>

@optional
- (void)gameVideoEditController:(GameVideoEditViewController *)arg1 didFailedWithError:(NSError *)arg2;
- (void)gameVideoEditController:(GameVideoEditViewController *)arg1 didFinishWithFilePath:(NSString *)arg2 withExtra:(NSDictionary *)arg3;
@end

