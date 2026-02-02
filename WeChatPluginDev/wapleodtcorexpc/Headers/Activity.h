//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface Activity : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) NSString *activityName; // @dynamic activityName;
@property(nonatomic) unsigned int beginTimeS; // @dynamic beginTimeS;
@property(nonatomic) unsigned int endTimeS; // @dynamic endTimeS;
@property(retain, nonatomic) NSMutableArray *stages; // @dynamic stages;

@end

