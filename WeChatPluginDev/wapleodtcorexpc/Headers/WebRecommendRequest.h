//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LbsLocationNew, NSMutableArray, NSString, WebRecommendRequest_WSFloatingWindow;

@interface WebRecommendRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adIdInfo; // @dynamic adIdInfo;
@property(nonatomic) unsigned int careMode; // @dynamic careMode;
@property(nonatomic) unsigned int channelId; // @dynamic channelId;
@property(retain, nonatomic) NSMutableArray *checkDocidList; // @dynamic checkDocidList;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned int displayPattern; // @dynamic displayPattern;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(retain, nonatomic) WebRecommendRequest_WSFloatingWindow *floatingWindow; // @dynamic floatingWindow;
@property(nonatomic) unsigned int fromPreTabChannelId; // @dynamic fromPreTabChannelId;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(nonatomic) _Bool isFromClient; // @dynamic isFromClient;
@property(nonatomic) unsigned int isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *navigationId; // @dynamic navigationId;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int pos; // @dynamic pos;
@property(retain, nonatomic) NSString *redPointMsgId; // @dynamic redPointMsgId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneActionType; // @dynamic sceneActionType;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned int youngMode; // @dynamic youngMode;

@end

