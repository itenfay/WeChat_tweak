//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavBrowseDetailData : NSObject
{
    _Bool _bResumeFirstBrowse;
    _Bool _bResumeSecondBrowse;
    unsigned int _favEntranceScene;
    unsigned int _favEntranceIndex;
    unsigned int _favId;
    unsigned int _favType;
    unsigned int _favSource;
    unsigned int _favSourceTime;
    unsigned int _needOtherAppOpen;
    unsigned int _enterSecondPageTimes;
    unsigned int _sendToFriendsTimes;
    unsigned int _shareToWCTimes;
    unsigned int _editFav;
    unsigned int _editTagTimes;
    unsigned int _deleteFav;
    unsigned int _scrollToBottom;
    unsigned int _favMainFrameIndex;
    unsigned int _netStatus;
    unsigned int _ifcache;
    unsigned int _timeIntervalToOpen;
    unsigned int _searchTagScene;
    NSString *_favInfoLength;
    NSString *_favSourceInfo;
    unsigned long long _favFirstPageBrowseTime;
    unsigned long long _favSecondPageBrowseTime;
    NSString *_sessionId;
    NSString *_searchText;
    NSString *_favTag;
    long long _enterFirstPageLogTime;
    long long _enterSecondPageLogTime;
}

+ (id)creatDataWithItem:(id)arg1 EntranceScene:(unsigned int)arg2 EntranceIndex:(unsigned int)arg3 SearchText:(id)arg4 TimeIntervalToOpen:(unsigned int)arg5 SearchTagScene:(unsigned int)arg6;
+ (id)creatDataWithItem:(id)arg1 EntranceScene:(unsigned int)arg2 EntranceIndex:(unsigned int)arg3 SearchText:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool bResumeSecondBrowse; // @synthesize bResumeSecondBrowse=_bResumeSecondBrowse;
@property(nonatomic) _Bool bResumeFirstBrowse; // @synthesize bResumeFirstBrowse=_bResumeFirstBrowse;
@property(nonatomic) unsigned int searchTagScene; // @synthesize searchTagScene=_searchTagScene;
@property(nonatomic) unsigned int timeIntervalToOpen; // @synthesize timeIntervalToOpen=_timeIntervalToOpen;
@property(nonatomic) unsigned int ifcache; // @synthesize ifcache=_ifcache;
@property(nonatomic) unsigned int netStatus; // @synthesize netStatus=_netStatus;
@property(nonatomic) long long enterSecondPageLogTime; // @synthesize enterSecondPageLogTime=_enterSecondPageLogTime;
@property(nonatomic) long long enterFirstPageLogTime; // @synthesize enterFirstPageLogTime=_enterFirstPageLogTime;
@property(retain, nonatomic) NSString *favTag; // @synthesize favTag=_favTag;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned int favMainFrameIndex; // @synthesize favMainFrameIndex=_favMainFrameIndex;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int scrollToBottom; // @synthesize scrollToBottom=_scrollToBottom;
@property(nonatomic) unsigned int deleteFav; // @synthesize deleteFav=_deleteFav;
@property(nonatomic) unsigned int editTagTimes; // @synthesize editTagTimes=_editTagTimes;
@property(nonatomic) unsigned int editFav; // @synthesize editFav=_editFav;
@property(nonatomic) unsigned int shareToWCTimes; // @synthesize shareToWCTimes=_shareToWCTimes;
@property(nonatomic) unsigned int sendToFriendsTimes; // @synthesize sendToFriendsTimes=_sendToFriendsTimes;
@property(nonatomic) unsigned int enterSecondPageTimes; // @synthesize enterSecondPageTimes=_enterSecondPageTimes;
@property(nonatomic) unsigned int needOtherAppOpen; // @synthesize needOtherAppOpen=_needOtherAppOpen;
@property(nonatomic) unsigned long long favSecondPageBrowseTime; // @synthesize favSecondPageBrowseTime=_favSecondPageBrowseTime;
@property(nonatomic) unsigned long long favFirstPageBrowseTime; // @synthesize favFirstPageBrowseTime=_favFirstPageBrowseTime;
@property(retain, nonatomic) NSString *favSourceInfo; // @synthesize favSourceInfo=_favSourceInfo;
@property(nonatomic) unsigned int favSourceTime; // @synthesize favSourceTime=_favSourceTime;
@property(nonatomic) unsigned int favSource; // @synthesize favSource=_favSource;
@property(retain, nonatomic) NSString *favInfoLength; // @synthesize favInfoLength=_favInfoLength;
@property(nonatomic) unsigned int favType; // @synthesize favType=_favType;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int favEntranceIndex; // @synthesize favEntranceIndex=_favEntranceIndex;
@property(nonatomic) unsigned int favEntranceScene; // @synthesize favEntranceScene=_favEntranceScene;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)deactivateSecondBrowse;
- (void)activateSecondBrowse;
- (void)deactivateFirstBrowse;
- (void)activateFirstBrowse;
- (void)configWithFavItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

