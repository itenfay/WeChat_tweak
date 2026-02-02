//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusIconAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int beginTime; // @dynamic beginTime;
@property(retain, nonatomic) NSString *bigIconUrl; // @dynamic bigIconUrl;
@property(retain, nonatomic) NSMutableArray *clusterDescriptions; // @dynamic clusterDescriptions;
@property(retain, nonatomic) NSMutableArray *clusterOnlyMeDescriptions; // @dynamic clusterOnlyMeDescriptions;
@property(retain, nonatomic) NSMutableArray *clusterWithMeDescriptions; // @dynamic clusterWithMeDescriptions;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(nonatomic) unsigned long long extOption; // @dynamic extOption;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSMutableArray *iconDescriptions; // @dynamic iconDescriptions;
@property(nonatomic) unsigned int order; // @dynamic order;
@property(retain, nonatomic) NSMutableArray *otherClusterDescriptions; // @dynamic otherClusterDescriptions;
@property(retain, nonatomic) NSString *unreadTextColor; // @dynamic unreadTextColor;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

