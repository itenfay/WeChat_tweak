//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusIconConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *configId; // @dynamic configId;
@property(retain, nonatomic) NSMutableArray *iconGroups; // @dynamic iconGroups;
@property(retain, nonatomic) NSMutableArray *icons; // @dynamic icons;
@property(nonatomic) long long key; // @dynamic key;

@end

