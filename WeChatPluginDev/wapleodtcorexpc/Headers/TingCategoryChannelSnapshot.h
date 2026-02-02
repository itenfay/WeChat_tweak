//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TingCategoryChannelSnapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *curListenId; // @dynamic curListenId;
@property(nonatomic) unsigned long long endTimeStampMs; // @dynamic endTimeStampMs;
@property(retain, nonatomic) NSString *nextListenId; // @dynamic nextListenId;
@property(nonatomic) unsigned long long pos; // @dynamic pos;

@end

