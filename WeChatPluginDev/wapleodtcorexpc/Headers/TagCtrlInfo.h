//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface TagCtrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *commentUserName; // @dynamic commentUserName;
@property(retain, nonatomic) NSString *contentId; // @dynamic contentId;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) NSMutableArray *extParams; // @dynamic extParams;
@property(retain, nonatomic) NSString *publishUsername; // @dynamic publishUsername;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

