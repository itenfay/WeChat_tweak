//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderEventDescriptionContact, FinderEventInfo_TemplateVersionInfo, FinderEventInfo_VideoTemplateInfo, FinderEventMusicInfo, FinderEventQuestInfo, FinderEventWordingInfo, FinderJumpInfo, FinderTopicHashTagInfo, NSMutableArray, NSString;

@interface FinderEventInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int availableFlag; // @dynamic availableFlag;
@property(nonatomic) unsigned int availableTemplate; // @dynamic availableTemplate;
@property(nonatomic) unsigned int closeFlag; // @dynamic closeFlag;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderEventDescriptionContact *descriptionContactInfo; // @dynamic descriptionContactInfo;
@property(retain, nonatomic) FinderJumpInfo *descriptionJumpInfo; // @dynamic descriptionJumpInfo;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(retain, nonatomic) NSString *eventName; // @dynamic eventName;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned long long fromObjectId; // @dynamic fromObjectId;
@property(retain, nonatomic) FinderTopicHashTagInfo *hashTagInfo; // @dynamic hashTagInfo;
@property(nonatomic) unsigned long long hiddenMark; // @dynamic hiddenMark;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int maxTopCount; // @dynamic maxTopCount;
@property(retain, nonatomic) FinderEventMusicInfo *musicInfo; // @dynamic musicInfo;
@property(nonatomic) unsigned int participantCount; // @dynamic participantCount;
@property(retain, nonatomic) NSMutableArray *postJumpList; // @dynamic postJumpList;
@property(retain, nonatomic) NSString *postWording; // @dynamic postWording;
@property(retain, nonatomic) FinderEventQuestInfo *questInfo; // @dynamic questInfo;
@property(retain, nonatomic) FinderEventInfo_TemplateVersionInfo *tmplVersionInfo; // @dynamic tmplVersionInfo;
@property(retain, nonatomic) FinderEventInfo_VideoTemplateInfo *videoTmplInfo; // @dynamic videoTmplInfo;
@property(nonatomic) unsigned int whitelistBlockFlag; // @dynamic whitelistBlockFlag;
@property(retain, nonatomic) NSString *whitelistBlockReason; // @dynamic whitelistBlockReason;
@property(retain, nonatomic) FinderEventWordingInfo *wordingInfo; // @dynamic wordingInfo;
@property(retain, nonatomic) NSString *wxappId; // @dynamic wxappId;
@property(retain, nonatomic) NSString *wxappName; // @dynamic wxappName;
@property(retain, nonatomic) NSString *wxappUrl; // @dynamic wxappUrl;

@end

