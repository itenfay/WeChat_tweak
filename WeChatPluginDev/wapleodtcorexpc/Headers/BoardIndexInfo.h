//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, UserLocation;

@interface BoardIndexInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *boardIndex; // @dynamic boardIndex;
@property(nonatomic) unsigned int boardIndexScene; // @dynamic boardIndexScene;
@property(retain, nonatomic) UserLocation *location; // @dynamic location;

@end

