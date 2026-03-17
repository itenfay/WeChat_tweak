//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WAShareGroupViewControllerDelegate <NSObject>

@optional
- (void)userTriggerDoneWithPrivacy:(long long)arg1 labelList:(NSArray *)arg2 contactList:(NSArray *)arg3;
- (void)userTriggerCancel;
@end

