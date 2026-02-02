//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderMemberShipZoneTabModelProtocol <NSObject>
- (void)requestFirstPage;
- (void)clearTabUnreadCount;
- (unsigned long long)tabUnreadCount;
- (NSString *)tabPageIdentifier;
- (Class)tabControllerClass;
- (NSString *)tabName;
@end

