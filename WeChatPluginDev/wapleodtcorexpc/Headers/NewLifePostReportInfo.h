//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, NewLifeRedDotTipsShowInfo;

@interface NewLifePostReportInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) _Bool fromDraft; // @dynamic fromDraft;
@property(retain, nonatomic) NSMutableArray *imageReportInfos; // @dynamic imageReportInfos;
@property(retain, nonatomic) NewLifeRedDotTipsShowInfo *profilePostRedDotInfo; // @dynamic profilePostRedDotInfo;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sourceEnterScene; // @dynamic sourceEnterScene;
@property(retain, nonatomic) NSMutableArray *templateIds; // @dynamic templateIds;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *topicText; // @dynamic topicText;

@end

