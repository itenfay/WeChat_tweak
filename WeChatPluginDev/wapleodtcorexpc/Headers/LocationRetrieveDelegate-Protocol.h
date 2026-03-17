//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLLocation;

@protocol LocationRetrieveDelegate <NSObject>
- (void)onRetrieveLocationCallbackTimeOut:(CLLocation *)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(CLLocation *)arg1;
- (void)onRetrieveLocationOK:(CLLocation *)arg1;
@end

