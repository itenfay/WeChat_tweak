//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface CheckResUpdateRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *context; // @dynamic context;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSMutableArray *resId; // @dynamic resId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

