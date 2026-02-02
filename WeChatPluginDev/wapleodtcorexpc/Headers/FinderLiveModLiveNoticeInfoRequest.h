//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveModLiveNoticeInfoRequest_ImgInfo, NSString;

@interface FinderLiveModLiveNoticeInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveModLiveNoticeInfoRequest_ImgInfo *bgImgInfo; // @dynamic bgImgInfo;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int notificationmsgTriggerType; // @dynamic notificationmsgTriggerType;
@property(nonatomic) unsigned int styleId; // @dynamic styleId;
@property(nonatomic) unsigned int topNoticeOptype; // @dynamic topNoticeOptype;

@end

