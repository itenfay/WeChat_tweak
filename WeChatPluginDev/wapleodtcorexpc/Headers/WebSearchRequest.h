//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSData, NSMutableArray, NSString, PoiCtrlInfo, SnsCtrlInfo, TagCtrlInfo, TagSearchInfo;

@interface WebSearchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *boxCtrlInfo; // @dynamic boxCtrlInfo;
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(nonatomic) unsigned int cliVersion; // @dynamic cliVersion;
@property(nonatomic) unsigned int darkMode; // @dynamic darkMode;
@property(nonatomic) unsigned int displayPattern; // @dynamic displayPattern;
@property(retain, nonatomic) NSMutableArray *extReqParams; // @dynamic extReqParams;
@property(nonatomic) unsigned int isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *matchUserList; // @dynamic matchUserList;
@property(retain, nonatomic) NSMutableArray *numConditions; // @dynamic numConditions;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) PoiCtrlInfo *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) NSMutableArray *prefixQuery; // @dynamic prefixQuery;
@property(retain, nonatomic) NSString *prefixSug; // @dynamic prefixSug;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneActionType; // @dynamic sceneActionType;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) SnsCtrlInfo *snsInfo; // @dynamic snsInfo;
@property(retain, nonatomic) NSString *sugId; // @dynamic sugId;
@property(nonatomic) unsigned int sugType; // @dynamic sugType;
@property(retain, nonatomic) TagCtrlInfo *tagExtInfo; // @dynamic tagExtInfo;
@property(retain, nonatomic) TagSearchInfo *tagInfo; // @dynamic tagInfo;
@property(retain, nonatomic) NSData *weAppCtrlInfo; // @dynamic weAppCtrlInfo;

@end

