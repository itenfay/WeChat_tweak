//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderWxAppInfo, MoneyOffTagInfo_AnimationUrl;

@interface MoneyOffTagInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long activityId; // @dynamic activityId;
@property(retain, nonatomic) MoneyOffTagInfo_AnimationUrl *animationUrl; // @dynamic animationUrl;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) FinderWxAppInfo *groupPage; // @dynamic groupPage;
@property(nonatomic) unsigned int joinedUserNum; // @dynamic joinedUserNum;
@property(nonatomic) unsigned int tagType; // @dynamic tagType;

@end

