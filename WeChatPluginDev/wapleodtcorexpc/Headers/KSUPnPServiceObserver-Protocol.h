//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSUPnPDevice, KSUPnPService;

@protocol KSUPnPServiceObserver <NSObject>

@optional
- (void)UPnPService:(KSUPnPService *)arg1 didUpdateDevice:(KSUPnPDevice *)arg2;
- (void)UPnPService:(KSUPnPService *)arg1 didDiscoverDevice:(KSUPnPDevice *)arg2;
@end

