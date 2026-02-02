//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol MBCommonAdapterDelegate <NSObject>
- (NSString *)getAppId;
- (MMUIViewController *)getParentViewController;
- (unsigned int)getDebugModeType;
@end

