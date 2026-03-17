//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLLocation;

@protocol WCFinderLocationManagerDelegate <NSObject>

@optional
- (void)WCFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (void)WCFinderLocationMgrDidUpdateLocationSuccessful:(CLLocation *)arg1;
@end

