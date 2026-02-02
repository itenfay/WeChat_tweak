//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCircleXUserInfo, NSString;

@interface MMListenCircleXTopicItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) _Bool notToRecommend; // @dynamic notToRecommend;
@property(nonatomic) unsigned int postNum; // @dynamic postNum;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) MMListenCircleXUserInfo *titleAuthor; // @dynamic titleAuthor;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;

@end

