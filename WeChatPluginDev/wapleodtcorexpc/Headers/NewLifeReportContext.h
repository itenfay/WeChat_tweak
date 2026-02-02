//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface NewLifeReportContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionList; // @dynamic actionList;
@property(nonatomic) unsigned int cacheType; // @dynamic cacheType;
@property(retain, nonatomic) NSString *contextId; // @dynamic contextId;
@property(nonatomic) unsigned long long fromLastEnterFindMoreTab; // @dynamic fromLastEnterFindMoreTab;
@property(nonatomic) unsigned int isNewLifeTab; // @dynamic isNewLifeTab;
@property(nonatomic) unsigned int openByView; // @dynamic openByView;
@property(retain, nonatomic) NSString *redDotUuid; // @dynamic redDotUuid;
@property(nonatomic) unsigned long long startTimestamp; // @dynamic startTimestamp;
@property(nonatomic) unsigned long long startUpTime; // @dynamic startUpTime;
@property(nonatomic) unsigned int useInstanceCache; // @dynamic useInstanceCache;

@end

