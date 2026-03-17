//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEnterpriseContact;

@protocol EnterpriseRoomContactSelectDelegate <NSObject>
- (void)onCancelSelectContact;
- (void)didSelectContact:(CEnterpriseContact *)arg1;
@end

