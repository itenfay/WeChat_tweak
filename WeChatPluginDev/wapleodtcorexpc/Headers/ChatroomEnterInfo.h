//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BackgroundInfo, NSMutableArray, NSString, UserEnterOption;

@interface ChatroomEnterInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BackgroundInfo *backgroundInfo; // @dynamic backgroundInfo;
@property(retain, nonatomic) NSString *buttomDesc; // @dynamic buttomDesc;
@property(retain, nonatomic) NSMutableArray *contentList; // @dynamic contentList;
@property(retain, nonatomic) NSString *reportStr; // @dynamic reportStr;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) UserEnterOption *userEnterOption; // @dynamic userEnterOption;

@end

