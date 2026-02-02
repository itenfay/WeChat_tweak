//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SearchMatchTip : NSObject
{
    NSString *_showResult;
    unsigned int _minLocation;
    _Bool _isSilent;
    unsigned int _createTime;
    unsigned int _chatRoomMemberCount;
    NSString *_key;
    NSString *_matchPhase;
    NSString *_queryText;
    NSString *_showPrefix;
    NSString *_showSuffix;
    unsigned long long _matchType;
    unsigned long long _matchSubType;
    unsigned long long _groupMemberMatchType;
    unsigned long long _location;
    NSString *_displayNameFullPY;
    unsigned long long _queryMatchType;
    NSMutableDictionary *_dicGroupMemberMatchTip;
}

+ (unsigned int)GetContactActiveDays;
+ (id)GetUnActiveMatchTipFrom:(id)arg1;
+ (id)GetActiveMatchTipFrom:(id)arg1;
+ (void)updateGroupSortContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberMatchTip; // @synthesize dicGroupMemberMatchTip=_dicGroupMemberMatchTip;
@property(nonatomic) unsigned int chatRoomMemberCount; // @synthesize chatRoomMemberCount=_chatRoomMemberCount;
@property(nonatomic) unsigned long long queryMatchType; // @synthesize queryMatchType=_queryMatchType;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
@property(retain, nonatomic) NSString *displayNameFullPY; // @synthesize displayNameFullPY=_displayNameFullPY;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) unsigned long long groupMemberMatchType; // @synthesize groupMemberMatchType=_groupMemberMatchType;
@property(nonatomic) unsigned long long matchSubType; // @synthesize matchSubType=_matchSubType;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSString *showSuffix; // @synthesize showSuffix=_showSuffix;
@property(retain, nonatomic) NSString *showPrefix; // @synthesize showPrefix=_showPrefix;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(retain, nonatomic) NSString *matchPhase; // @synthesize matchPhase=_matchPhase;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)isMultiMemberMatch;
- (_Bool)isStrongMatch;
- (long long)comparePhoneSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)comparePhoneSearchMatchTipFirstLineAscending:(id)arg1;
- (long long)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)arg1;
- (long long)compareGroupSearchMatchTipAscending:(id)arg1;
- (long long)compareSearchMatchTipSecondLineAscending:(id)arg1;
- (long long)compareSearchMatchTipFirstLineAscending:(id)arg1;
- (id)matchKeywordsForDisplay;
- (unsigned int)minMatchLocation;
- (id)getShowResult;
- (unsigned int)convertLogType:(unsigned int)arg1;
- (unsigned int)convertGroupMemberMatchType;
- (unsigned int)convertLogType;
- (id)init;
- (_Bool)isValidMatchTypeStr:(id)arg1;
- (id)convertMatchTypeStr;

@end

