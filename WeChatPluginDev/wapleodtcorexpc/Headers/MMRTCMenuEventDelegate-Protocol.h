//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMRTCMenuResponder, NSString;

@protocol MMRTCMenuEventDelegate <NSObject>

@optional
- (void)menuResponderDidSearch:(MMRTCMenuResponder *)arg1 didCopyText:(NSString *)arg2;
- (void)menuResponderDidForward:(MMRTCMenuResponder *)arg1;
- (void)menuResponderDidSelectAll:(MMRTCMenuResponder *)arg1;
- (void)menuResponder:(MMRTCMenuResponder *)arg1 didCopyText:(NSString *)arg2;
@end

