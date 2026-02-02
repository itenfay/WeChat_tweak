//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MMListenCoverInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverWording; // @dynamic coverWording;
@property(retain, nonatomic) NSMutableArray *covers; // @dynamic covers;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) unsigned int showNum; // @dynamic showNum;
@property(nonatomic) int type; // @dynamic type;

@end

