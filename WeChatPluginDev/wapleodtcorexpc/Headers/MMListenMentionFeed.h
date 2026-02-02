//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenCircleXPostInfo, MMListenItem, MMListenMentionFeedReportInfo, MMListenMentionFeed_JumpInfo;

@interface MMListenMentionFeed : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) MMListenCircleXPostInfo *circlexPostInfo; // @dynamic circlexPostInfo;
@property(nonatomic) unsigned int feedType; // @dynamic feedType;
@property(retain, nonatomic) MMListenMentionFeed_JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) MMListenMentionFeedReportInfo *reportInfo; // @dynamic reportInfo;

@end

