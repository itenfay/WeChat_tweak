//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class APPortal;

@protocol APProtalDelegate <NSObject>

@optional
- (void)didSuccessOfAPPortal:(APPortal *)arg1;
- (void)didStartApPortal:(APPortal *)arg1;
- (void)didReadyOfApPortal:(APPortal *)arg1;
@end

