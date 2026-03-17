//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSearchGroupFeature : NSObject
{
    unsigned int _groupLastActiveTime;
    unsigned int _groupMySelfLastActiveTime;
    unsigned int _groupMemberCount;
    unsigned int _groupUnReadMsgCount;
    unsigned int _groupFriendsCount;
    unsigned int _myRecentMsgCount;
    unsigned int _isMute;
    unsigned int _myRecentSearchDays30;
    unsigned int _myRecentSearchDays14;
    unsigned int _myRecentSearchDays7;
    unsigned int _myRecentSearchCount30;
    unsigned int _myRecentSearchCount14;
    unsigned int _myRecentSearchCount7;
    unsigned int _myLastSearchTime;
    unsigned int _isSysLangAsEn;
    unsigned int _isSysLangAsCh;
    unsigned int _matchType;
}

@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned int isSysLangAsCh; // @synthesize isSysLangAsCh=_isSysLangAsCh;
@property(nonatomic) unsigned int isSysLangAsEn; // @synthesize isSysLangAsEn=_isSysLangAsEn;
@property(nonatomic) unsigned int myLastSearchTime; // @synthesize myLastSearchTime=_myLastSearchTime;
@property(nonatomic) unsigned int myRecentSearchCount7; // @synthesize myRecentSearchCount7=_myRecentSearchCount7;
@property(nonatomic) unsigned int myRecentSearchCount14; // @synthesize myRecentSearchCount14=_myRecentSearchCount14;
@property(nonatomic) unsigned int myRecentSearchCount30; // @synthesize myRecentSearchCount30=_myRecentSearchCount30;
@property(nonatomic) unsigned int myRecentSearchDays7; // @synthesize myRecentSearchDays7=_myRecentSearchDays7;
@property(nonatomic) unsigned int myRecentSearchDays14; // @synthesize myRecentSearchDays14=_myRecentSearchDays14;
@property(nonatomic) unsigned int myRecentSearchDays30; // @synthesize myRecentSearchDays30=_myRecentSearchDays30;
@property(nonatomic) unsigned int isMute; // @synthesize isMute=_isMute;
@property(nonatomic) unsigned int myRecentMsgCount; // @synthesize myRecentMsgCount=_myRecentMsgCount;
@property(nonatomic) unsigned int groupFriendsCount; // @synthesize groupFriendsCount=_groupFriendsCount;
@property(nonatomic) unsigned int groupUnReadMsgCount; // @synthesize groupUnReadMsgCount=_groupUnReadMsgCount;
@property(nonatomic) unsigned int groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) unsigned int groupMySelfLastActiveTime; // @synthesize groupMySelfLastActiveTime=_groupMySelfLastActiveTime;
@property(nonatomic) unsigned int groupLastActiveTime; // @synthesize groupLastActiveTime=_groupLastActiveTime;

@end

