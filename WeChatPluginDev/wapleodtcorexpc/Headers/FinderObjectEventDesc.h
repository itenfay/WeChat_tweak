//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventWordingInfo, NSString;

@interface FinderObjectEventDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(nonatomic) unsigned int eventAttendCount; // @dynamic eventAttendCount;
@property(retain, nonatomic) NSString *eventCreatorNickname; // @dynamic eventCreatorNickname;
@property(retain, nonatomic) NSString *eventDescribe; // @dynamic eventDescribe;
@property(retain, nonatomic) NSString *eventName; // @dynamic eventName;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned long long hiddenMark; // @dynamic hiddenMark;
@property(nonatomic) unsigned int isNeedPreload; // @dynamic isNeedPreload;
@property(retain, nonatomic) FinderEventWordingInfo *wordingInfo; // @dynamic wordingInfo;

@end

