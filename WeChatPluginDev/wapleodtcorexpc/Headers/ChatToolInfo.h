//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ChatToolInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appusername; // @dynamic appusername;
@property(nonatomic) unsigned int chooseType; // @dynamic chooseType;
@property(retain, nonatomic) NSMutableArray *participatorList; // @dynamic participatorList;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

