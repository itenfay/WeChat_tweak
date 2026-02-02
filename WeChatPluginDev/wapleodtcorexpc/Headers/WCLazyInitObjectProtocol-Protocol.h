//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCLazyInitObjectProtocol <NSObject>
@property(nonatomic) _Bool haveLazyInit;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
@end

