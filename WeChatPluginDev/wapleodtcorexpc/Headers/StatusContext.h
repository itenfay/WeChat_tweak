//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *statusDescription; // @dynamic statusDescription;
@property(retain, nonatomic) NSString *statusId; // @dynamic statusId;
@property(retain, nonatomic) NSMutableArray *statusTags; // @dynamic statusTags;
@property(retain, nonatomic) NSString *statusWord; // @dynamic statusWord;

@end

