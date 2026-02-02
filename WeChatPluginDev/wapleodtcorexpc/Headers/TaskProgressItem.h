//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TaskProgressItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int curComplete; // @dynamic curComplete;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int gainIntimacy; // @dynamic gainIntimacy;
@property(nonatomic) unsigned int maxComplete; // @dynamic maxComplete;
@property(nonatomic) unsigned int taskDailyMaxIntimacy; // @dynamic taskDailyMaxIntimacy;
@property(nonatomic) unsigned int taskType; // @dynamic taskType;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

