//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary, NSString;

@protocol MMEasterEggActivityDelegate <NSObject>
- (NSDictionary *)getExtInfo;
- (long long)getEffectType;
- (MMUIViewController *)getViewController;
- (void)showInteractiveUIWithReportString:(NSString *)arg1;
@end

