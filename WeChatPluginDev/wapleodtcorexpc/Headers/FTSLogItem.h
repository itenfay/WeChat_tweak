//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSString;

@interface FTSLogItem : NSObject
{
    _Bool _isSilentGroup;
    unsigned int _guideStyle;
    unsigned int _queryMatchType;
    unsigned int _groupMemberMatchLogType;
    unsigned int _browseTime;
    unsigned int _normalContactCount;
    unsigned int _groupContactCount;
    unsigned int _brandContactCount;
    unsigned int _messageCount;
    unsigned int _featureCount;
    unsigned int _favCount;
    unsigned int _gameCount;
    unsigned int _addressBookCount;
    unsigned int _weAppCount;
    unsigned int _miniGameCount;
    unsigned int _sectionPos;
    unsigned int _resultCount;
    unsigned int _lastActiveTime;
    unsigned int _myLastActiveTime;
    unsigned int _memCount;
    unsigned int _memFanCount;
    unsigned int _unReadCount;
    unsigned int _myRecentMsgCount;
    unsigned int _myLastSearchTime;
    unsigned int _uiFinderSearchCount;
    unsigned int _customerServiceCount;
    unsigned int _customerServiceType;
    unsigned int _customerServiceMatchType;
    unsigned long long _searchScene;
    unsigned long long _clickType;
    unsigned long long _row;
    unsigned long long _clickSubType;
    unsigned long long _bussinessRow;
    NSString *_searchId;
    unsigned long long _docId;
    unsigned long long _matchType;
    NSString *_itemName;
    NSString *_query;
    NSDictionary *_voiceInfo;
    NSMutableSet *_exposeSet;
    NSString *_groupId;
    NSString *_matchStr;
    NSString *_myRecentSearchCount;
    NSString *_myRecentSearchDays;
    NSString *_topHitInfo;
    double _trainScore;
    NSString *_nsDocId;
    NSString *_nsWeAppId;
    NSString *_nsFinderUserName;
    NSString *_nsItemUserName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int customerServiceMatchType; // @synthesize customerServiceMatchType=_customerServiceMatchType;
@property(nonatomic) unsigned int customerServiceType; // @synthesize customerServiceType=_customerServiceType;
@property(nonatomic) unsigned int customerServiceCount; // @synthesize customerServiceCount=_customerServiceCount;
@property(retain, nonatomic) NSString *nsItemUserName; // @synthesize nsItemUserName=_nsItemUserName;
@property(nonatomic) unsigned int uiFinderSearchCount; // @synthesize uiFinderSearchCount=_uiFinderSearchCount;
@property(retain, nonatomic) NSString *nsFinderUserName; // @synthesize nsFinderUserName=_nsFinderUserName;
@property(retain, nonatomic) NSString *nsWeAppId; // @synthesize nsWeAppId=_nsWeAppId;
@property(retain, nonatomic) NSString *nsDocId; // @synthesize nsDocId=_nsDocId;
@property(nonatomic) double trainScore; // @synthesize trainScore=_trainScore;
@property(retain, nonatomic) NSString *topHitInfo; // @synthesize topHitInfo=_topHitInfo;
@property(nonatomic) unsigned int myLastSearchTime; // @synthesize myLastSearchTime=_myLastSearchTime;
@property(retain, nonatomic) NSString *myRecentSearchDays; // @synthesize myRecentSearchDays=_myRecentSearchDays;
@property(retain, nonatomic) NSString *myRecentSearchCount; // @synthesize myRecentSearchCount=_myRecentSearchCount;
@property(nonatomic) unsigned int myRecentMsgCount; // @synthesize myRecentMsgCount=_myRecentMsgCount;
@property(retain, nonatomic) NSString *matchStr; // @synthesize matchStr=_matchStr;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned int unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool isSilentGroup; // @synthesize isSilentGroup=_isSilentGroup;
@property(nonatomic) unsigned int memFanCount; // @synthesize memFanCount=_memFanCount;
@property(nonatomic) unsigned int memCount; // @synthesize memCount=_memCount;
@property(nonatomic) unsigned int myLastActiveTime; // @synthesize myLastActiveTime=_myLastActiveTime;
@property(nonatomic) unsigned int lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(retain, nonatomic) NSMutableSet *exposeSet; // @synthesize exposeSet=_exposeSet;
@property(retain, nonatomic) NSDictionary *voiceInfo; // @synthesize voiceInfo=_voiceInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(nonatomic) unsigned int sectionPos; // @synthesize sectionPos=_sectionPos;
@property(nonatomic) unsigned int miniGameCount; // @synthesize miniGameCount=_miniGameCount;
@property(nonatomic) unsigned int weAppCount; // @synthesize weAppCount=_weAppCount;
@property(nonatomic) unsigned int addressBookCount; // @synthesize addressBookCount=_addressBookCount;
@property(nonatomic) unsigned int gameCount; // @synthesize gameCount=_gameCount;
@property(nonatomic) unsigned int favCount; // @synthesize favCount=_favCount;
@property(nonatomic) unsigned int featureCount; // @synthesize featureCount=_featureCount;
@property(nonatomic) unsigned int messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) unsigned int brandContactCount; // @synthesize brandContactCount=_brandContactCount;
@property(nonatomic) unsigned int groupContactCount; // @synthesize groupContactCount=_groupContactCount;
@property(nonatomic) unsigned int normalContactCount; // @synthesize normalContactCount=_normalContactCount;
@property(nonatomic) unsigned int browseTime; // @synthesize browseTime=_browseTime;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) unsigned int groupMemberMatchLogType; // @synthesize groupMemberMatchLogType=_groupMemberMatchLogType;
@property(nonatomic) unsigned int queryMatchType; // @synthesize queryMatchType=_queryMatchType;
@property(nonatomic) unsigned int guideStyle; // @synthesize guideStyle=_guideStyle;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) unsigned long long bussinessRow; // @synthesize bussinessRow=_bussinessRow;
@property(nonatomic) unsigned long long clickSubType; // @synthesize clickSubType=_clickSubType;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (unsigned long long)filteredDocId;
- (id)filteredSearchId;
- (id)genStatStringForSubSearch;
- (id)genStatString;
- (_Bool)shouldDiscardByOverseaUser;
- (id)getExposeInfo;
- (_Bool)isVoiceResultMod;
- (id)genVoiceInfo;
- (_Bool)hasVoiceInput;
- (id)formatLogString:(id)arg1;
- (void)parse:(id)arg1;
- (id)initWithParams:(id)arg1;
- (id)init;

@end

