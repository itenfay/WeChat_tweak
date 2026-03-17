//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCGroupTagViewControllerDelegate <NSObject>

@optional
- (void)GroupTagViewControllerWillDissappear;
- (void)privacySettingChanged:(long long)arg1 label:(NSArray *)arg2 contacts:(NSArray *)arg3;
- (_Bool)canSelectPrivacySetting:(long long)arg1;
@end

