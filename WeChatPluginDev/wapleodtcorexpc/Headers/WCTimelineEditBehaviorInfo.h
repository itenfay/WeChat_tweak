//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCTimelineEditBehaviorInfo : NSObject
{
    _Bool _dynamicTagEnabled;
    NSString *_postSessionID;
    NSString *_sessionID;
    long long _visibleBtnClickNum;
    long long _latestSettingShowStatue;
    long long _latestSettingClickStatue;
    long long _latestSettingGroupCount;
    NSString *_latestSettingGroupList;
    long long _latestSettingUinCount;
    NSString *_latestSettingUinList;
    long long _latestSettingLabelCount;
    NSString *_latestSettingLabelList;
    long long _privacyScene;
    long long _importFromChatroomClickCount;
    NSMutableArray *_selectedChatroomArr;
    NSMutableDictionary *_chatroomDetailViewDic;
    long long _importFromContactClickCount;
    NSMutableArray *_selectedContactArr;
    NSMutableArray *_selectedLabelArr;
    NSString *_publishID;
    long long _postStatus;
    unsigned long long _enterScene;
    long long _previousPrivacy;
    NSMutableArray *_selectFriendFromTags;
    NSMutableSet *_searchSelectVisibleTagIDSet;
    NSMutableSet *_searchSelectInVisibleTagIDSet;
    unsigned long long _searchTagCountOfSelectFriendFromTags;
    unsigned long long _privacySettingStartTime;
    unsigned long long _privacySettingDuration;
    unsigned long long _selectFriendStartTime;
    unsigned long long _selectFriendDuration;
    unsigned long long _selectFriendFromGroupStartTime;
    unsigned long long _selectFriendFromGroupDuration;
    unsigned long long _selectFriendFromTagStartTime;
    unsigned long long _selectFriendFromTagDuration;
    unsigned long long _selectTagStartTime;
    unsigned long long _selectTagDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectTagDuration; // @synthesize selectTagDuration=_selectTagDuration;
@property(nonatomic) unsigned long long selectTagStartTime; // @synthesize selectTagStartTime=_selectTagStartTime;
@property(nonatomic) unsigned long long selectFriendFromTagDuration; // @synthesize selectFriendFromTagDuration=_selectFriendFromTagDuration;
@property(nonatomic) unsigned long long selectFriendFromTagStartTime; // @synthesize selectFriendFromTagStartTime=_selectFriendFromTagStartTime;
@property(nonatomic) unsigned long long selectFriendFromGroupDuration; // @synthesize selectFriendFromGroupDuration=_selectFriendFromGroupDuration;
@property(nonatomic) unsigned long long selectFriendFromGroupStartTime; // @synthesize selectFriendFromGroupStartTime=_selectFriendFromGroupStartTime;
@property(nonatomic) unsigned long long selectFriendDuration; // @synthesize selectFriendDuration=_selectFriendDuration;
@property(nonatomic) unsigned long long selectFriendStartTime; // @synthesize selectFriendStartTime=_selectFriendStartTime;
@property(nonatomic) unsigned long long privacySettingDuration; // @synthesize privacySettingDuration=_privacySettingDuration;
@property(nonatomic) unsigned long long privacySettingStartTime; // @synthesize privacySettingStartTime=_privacySettingStartTime;
@property(nonatomic) unsigned long long searchTagCountOfSelectFriendFromTags; // @synthesize searchTagCountOfSelectFriendFromTags=_searchTagCountOfSelectFriendFromTags;
@property(retain, nonatomic) NSMutableSet *searchSelectInVisibleTagIDSet; // @synthesize searchSelectInVisibleTagIDSet=_searchSelectInVisibleTagIDSet;
@property(retain, nonatomic) NSMutableSet *searchSelectVisibleTagIDSet; // @synthesize searchSelectVisibleTagIDSet=_searchSelectVisibleTagIDSet;
@property(retain, nonatomic) NSMutableArray *selectFriendFromTags; // @synthesize selectFriendFromTags=_selectFriendFromTags;
@property(nonatomic) long long previousPrivacy; // @synthesize previousPrivacy=_previousPrivacy;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) _Bool dynamicTagEnabled; // @synthesize dynamicTagEnabled=_dynamicTagEnabled;
@property(nonatomic) long long postStatus; // @synthesize postStatus=_postStatus;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSMutableArray *selectedLabelArr; // @synthesize selectedLabelArr=_selectedLabelArr;
@property(retain, nonatomic) NSMutableArray *selectedContactArr; // @synthesize selectedContactArr=_selectedContactArr;
@property(nonatomic) long long importFromContactClickCount; // @synthesize importFromContactClickCount=_importFromContactClickCount;
@property(retain, nonatomic) NSMutableDictionary *chatroomDetailViewDic; // @synthesize chatroomDetailViewDic=_chatroomDetailViewDic;
@property(retain, nonatomic) NSMutableArray *selectedChatroomArr; // @synthesize selectedChatroomArr=_selectedChatroomArr;
@property(nonatomic) long long importFromChatroomClickCount; // @synthesize importFromChatroomClickCount=_importFromChatroomClickCount;
@property(nonatomic) long long privacyScene; // @synthesize privacyScene=_privacyScene;
@property(retain, nonatomic) NSString *latestSettingLabelList; // @synthesize latestSettingLabelList=_latestSettingLabelList;
@property(nonatomic) long long latestSettingLabelCount; // @synthesize latestSettingLabelCount=_latestSettingLabelCount;
@property(retain, nonatomic) NSString *latestSettingUinList; // @synthesize latestSettingUinList=_latestSettingUinList;
@property(nonatomic) long long latestSettingUinCount; // @synthesize latestSettingUinCount=_latestSettingUinCount;
@property(retain, nonatomic) NSString *latestSettingGroupList; // @synthesize latestSettingGroupList=_latestSettingGroupList;
@property(nonatomic) long long latestSettingGroupCount; // @synthesize latestSettingGroupCount=_latestSettingGroupCount;
@property(nonatomic) long long latestSettingClickStatue; // @synthesize latestSettingClickStatue=_latestSettingClickStatue;
@property(nonatomic) long long latestSettingShowStatue; // @synthesize latestSettingShowStatue=_latestSettingShowStatue;
@property(nonatomic) long long visibleBtnClickNum; // @synthesize visibleBtnClickNum=_visibleBtnClickNum;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *postSessionID; // @synthesize postSessionID=_postSessionID;
- (id)logString;
- (id)getLabelIdStr:(id)arg1;
- (unsigned long long)searchTagCountOfSelectTag;
- (id)genPrivacySettingString;
- (id)getLableNameAndUserCountStr:(id)arg1;
- (id)getChatRoomNameAndUserCountStr:(id)arg1;
- (void)setupInitData;
- (id)init;

@end

