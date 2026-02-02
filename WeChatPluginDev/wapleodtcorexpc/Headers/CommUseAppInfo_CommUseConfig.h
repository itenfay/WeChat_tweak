//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface CommUseAppInfo_CommUseConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int getLocaltionWaitMs; // @dynamic getLocaltionWaitMs;
@property(nonatomic) unsigned int historyShowType; // @dynamic historyShowType;
@property(retain, nonatomic) NSString *nextReqExtraData; // @dynamic nextReqExtraData;
@property(nonatomic) unsigned int noResponseMsWhenRefresh; // @dynamic noResponseMsWhenRefresh;
@property(retain, nonatomic) NSString *overviewExtraData; // @dynamic overviewExtraData;
@property(retain, nonatomic) NSMutableArray *referInfo; // @dynamic referInfo;
@property(nonatomic) _Bool refreshImmediately; // @dynamic refreshImmediately;
@property(nonatomic) _Bool reportLocation; // @dynamic reportLocation;
@property(nonatomic) _Bool reportSsid; // @dynamic reportSsid;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(nonatomic) unsigned int updateLoadingWaitMs; // @dynamic updateLoadingWaitMs;

@end

