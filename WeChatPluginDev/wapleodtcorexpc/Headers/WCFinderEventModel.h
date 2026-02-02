//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventDescriptionContact, FinderEventMusicInfo, FinderEventWordingInfo, FinderJumpInfo, NSArray, NSDate, NSString, WCFinderContact;

@interface WCFinderEventModel : NSObject
{
    _Bool _closed;
    unsigned int _participantCount;
    unsigned int _feedCount;
    unsigned int _maxTopCount;
    unsigned int _availableFlag;
    unsigned long long _eventTopicId;
    unsigned long long _hiddenMark;
    WCFinderContact *_contact;
    NSString *_eventName;
    NSString *_eventDescription;
    NSString *_coverImgUrl;
    unsigned long long _fromObjectId;
    NSDate *_endDate;
    FinderEventWordingInfo *_wordingInfo;
    FinderJumpInfo *_descriptionJumpInfo;
    FinderEventDescriptionContact *_descContactInfo;
    NSArray *_postJumpList;
    NSString *_postWording;
    FinderEventMusicInfo *_musicInfo;
    unsigned long long _endTime;
}

+ (id)fromPBEvent:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_descriptionJumpInfo;
+ (void)PBArrayAdd_descContactInfo;
+ (void)PBArrayAdd_hiddenMark;
+ (void)PBArrayAdd_wordingInfo;
+ (void)PBArrayAdd_availableFlag;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_closed;
+ (void)PBArrayAdd_maxTopCount;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_fromObjectId;
+ (void)PBArrayAdd_coverImgUrl;
+ (void)PBArrayAdd_participantCount;
+ (void)PBArrayAdd_eventDescription;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_eventTopicId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int availableFlag; // @synthesize availableFlag=_availableFlag;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) FinderEventMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(copy, nonatomic) NSString *postWording; // @synthesize postWording=_postWording;
@property(retain, nonatomic) NSArray *postJumpList; // @synthesize postJumpList=_postJumpList;
@property(retain, nonatomic) FinderEventDescriptionContact *descContactInfo; // @synthesize descContactInfo=_descContactInfo;
@property(retain, nonatomic) FinderJumpInfo *descriptionJumpInfo; // @synthesize descriptionJumpInfo=_descriptionJumpInfo;
@property(retain, nonatomic) FinderEventWordingInfo *wordingInfo; // @synthesize wordingInfo=_wordingInfo;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) unsigned int maxTopCount; // @synthesize maxTopCount=_maxTopCount;
@property(nonatomic) unsigned int feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) unsigned long long fromObjectId; // @synthesize fromObjectId=_fromObjectId;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(nonatomic) unsigned int participantCount; // @synthesize participantCount=_participantCount;
@property(copy, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long hiddenMark; // @synthesize hiddenMark=_hiddenMark;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
- (_Bool)isValid;
@property(readonly, nonatomic) _Bool hadPosted;
- (id)bindEventInfo;
- (id)convertEventInfo;
- (id)initWithEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

