//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveNavStreamStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long eventTime; // @dynamic eventTime;
@property(retain, nonatomic) NSMutableArray *feedsStatus; // @dynamic feedsStatus;
@property(nonatomic) unsigned int loadingCnt; // @dynamic loadingCnt;
@property(nonatomic) unsigned long long loadingEndTime; // @dynamic loadingEndTime;
@property(nonatomic) unsigned int loadingTimeMs; // @dynamic loadingTimeMs;
@property(nonatomic) int loadingType; // @dynamic loadingType;
@property(retain, nonatomic) NSString *reportUniqueKey; // @dynamic reportUniqueKey;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned long long statusFlag; // @dynamic statusFlag;

@end

