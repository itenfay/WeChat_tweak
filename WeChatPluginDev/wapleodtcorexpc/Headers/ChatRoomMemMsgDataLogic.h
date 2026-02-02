//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol ChatRoomMemMsgDataLogicDelegate;

@interface ChatRoomMemMsgDataLogic : NSObject
{
    NSString *m_nsChatName;
    NSString *m_nsMemName;
    id <ChatRoomMemMsgDataLogicDelegate> m_delegate;
    unsigned int m_uiFromID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiLeftCount;
}

- (void).cxx_destruct;
- (void)getMsgsLimit:(int)arg1;
- (_Bool)isMsgMatch:(id)arg1;
- (id)initWithChat:(id)arg1 memName:(id)arg2 delegate:(id)arg3;

@end

