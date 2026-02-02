//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GetChatRoomMemberDetailCache : NSObject
{
    unsigned int _m_uiChatRoomClientVersion;
    unsigned int _m_uiChatRoomServerVersion;
    unsigned int _m_uiLastGetTime;
    NSString *_m_nsUserName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiLastGetTime; // @synthesize m_uiLastGetTime=_m_uiLastGetTime;
@property(nonatomic) unsigned int m_uiChatRoomServerVersion; // @synthesize m_uiChatRoomServerVersion=_m_uiChatRoomServerVersion;
@property(nonatomic) unsigned int m_uiChatRoomClientVersion; // @synthesize m_uiChatRoomClientVersion=_m_uiChatRoomClientVersion;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;

@end

