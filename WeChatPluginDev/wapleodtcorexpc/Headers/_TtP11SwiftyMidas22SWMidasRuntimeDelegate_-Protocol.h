//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "SWMidasExternalEventTrackerDelegate-Protocol.h"
#import "SWMidasExternalLoggerDelegate-Protocol.h"

@class NSString;

@protocol _TtP11SwiftyMidas22SWMidasRuntimeDelegate_ <SWMidasExternalEventTrackerDelegate, SWMidasExternalLoggerDelegate>

@optional
- (NSString *)privacyInfoWithKey:(long long)arg1;
- (_Bool)shouldProductIDIgnoredHandlingWithProductID:(NSString *)arg1;
@end

