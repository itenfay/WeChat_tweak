//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface ResourcePreloadControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool disable; // @dynamic disable;
@property(nonatomic) unsigned int diskLimitTimeSec; // @dynamic diskLimitTimeSec;
@property(nonatomic) unsigned int maxWebPreloadFileCount; // @dynamic maxWebPreloadFileCount;
@property(retain, nonatomic) NSMutableArray *queryStringKeyList; // @dynamic queryStringKeyList;

@end

