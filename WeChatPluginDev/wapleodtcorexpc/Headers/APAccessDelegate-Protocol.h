//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class APAccess;

@protocol APAccessDelegate <NSObject>

@optional
- (void)didFailOfApAccess:(APAccess *)arg1;
- (void)didSuccessOfApAccess:(APAccess *)arg1;
@end

