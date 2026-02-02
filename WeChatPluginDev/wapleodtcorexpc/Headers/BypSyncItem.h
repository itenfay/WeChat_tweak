//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface BypSyncItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *buff; // @dynamic buff;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(nonatomic) unsigned int syncKeyType; // @dynamic syncKeyType;

@end

