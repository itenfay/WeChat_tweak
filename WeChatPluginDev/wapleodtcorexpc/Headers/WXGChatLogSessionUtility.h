//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WXGChatLogSessionUtility : NSObject
{
    NSMutableArray *_allUserNames;
    NSMutableArray *_singleChatSessions;
    NSMutableArray *_chatRoomSessions;
    NSMutableArray *_starSessions;
    NSMutableArray *_chatOnlySessions;
    NSMutableArray *_foldChatRoomSessions;
    NSMutableArray *_topSessions;
    NSMutableDictionary *_includeUsersMap;
}

+ (_Bool)p_isLocalizedContactThatCannotSync:(id)arg1;
+ (id)loadAllUserName;
+ (id)getUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *includeUsersMap; // @synthesize includeUsersMap=_includeUsersMap;
@property(retain, nonatomic) NSMutableArray *topSessions; // @synthesize topSessions=_topSessions;
@property(retain, nonatomic) NSMutableArray *foldChatRoomSessions; // @synthesize foldChatRoomSessions=_foldChatRoomSessions;
@property(retain, nonatomic) NSMutableArray *chatOnlySessions; // @synthesize chatOnlySessions=_chatOnlySessions;
@property(retain, nonatomic) NSMutableArray *starSessions; // @synthesize starSessions=_starSessions;
@property(retain, nonatomic) NSMutableArray *chatRoomSessions; // @synthesize chatRoomSessions=_chatRoomSessions;
@property(retain, nonatomic) NSMutableArray *singleChatSessions; // @synthesize singleChatSessions=_singleChatSessions;
@property(retain, nonatomic) NSMutableArray *allUserNames; // @synthesize allUserNames=_allUserNames;
- (id)getUserIncludeMap;
- (id)getTopSessions;
- (id)getFoldChatRoomSessions;
- (id)getChatRoomSessions;
- (id)getSingleChatSessions;
- (id)getStarSessions;
- (id)getAllSessions;
- (id)getChatOnlySessions;
- (void)loadAllTypeSessionOnMainThread;
- (void)loadAllTypeSessionWithIncludeUsers:(id)arg1;

@end

