//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@protocol MMDeleteNotRegularContactLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)onGetNeedDeleteNotRegularContactListFail:(NSString *)arg1;
- (void)onGetNeedDeleteNotRegularContactListDone:(NSArray *)arg1 context:(NSString *)arg2;
@end

