//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSUPnPDevice, KSUPnPEventRecord;

@protocol KSUPnPDeviceDescriptionEvents <NSObject>

@optional
- (void)UPnPDevice:(KSUPnPDevice *)arg1 didCompleteRequestingDescriptionWithRecord:(KSUPnPEventRecord *)arg2;
@end

