//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IStoreEmotionDesignerReddotMgrExt <NSObject>

@optional
- (void)onDesignerPersonalInfoUpdated:(NSString *)arg1;
- (void)onDesigner:(NSString *)arg1 singlePid:(NSString *)arg2 reddotStatusChange:(_Bool)arg3;
- (void)onDesigner:(NSString *)arg1 changReddotStatus:(_Bool)arg2 newReddotPids:(NSArray *)arg3;
@end

