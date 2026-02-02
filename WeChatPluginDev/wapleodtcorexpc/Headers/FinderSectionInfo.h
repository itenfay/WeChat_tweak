//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGetRelatedListResp, FinderGetTopicListResponse, FinderStreamResponse, NSString;

@interface FinderSectionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) NSString *iconUrlDark; // @dynamic iconUrlDark;
@property(retain, nonatomic) NSString *iconUrlLight; // @dynamic iconUrlLight;
@property(nonatomic) unsigned int moreActionType; // @dynamic moreActionType;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) FinderGetRelatedListResp *relatedResp; // @dynamic relatedResp;
@property(retain, nonatomic) NSString *sectionDesc; // @dynamic sectionDesc;
@property(retain, nonatomic) NSString *sectionId; // @dynamic sectionId;
@property(retain, nonatomic) NSString *sectionSubTitle; // @dynamic sectionSubTitle;
@property(retain, nonatomic) NSString *sectionTitle; // @dynamic sectionTitle;
@property(nonatomic) unsigned int sectionType; // @dynamic sectionType;
@property(retain, nonatomic) FinderStreamResponse *streamResp; // @dynamic streamResp;
@property(retain, nonatomic) FinderGetTopicListResponse *topicResp; // @dynamic topicResp;

@end

