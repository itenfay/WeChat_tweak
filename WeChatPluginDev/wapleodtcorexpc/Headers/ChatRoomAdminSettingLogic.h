//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact;
@protocol ChatRoomAdminSettingLogicDelegate;

@interface ChatRoomAdminSettingLogic : NSObject
{
    id <ChatRoomAdminSettingLogicDelegate> _m_delegate;
    CContact *_m_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <ChatRoomAdminSettingLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)start;

@end

