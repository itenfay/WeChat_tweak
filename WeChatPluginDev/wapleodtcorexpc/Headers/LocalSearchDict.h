//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface LocalSearchDict : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(nonatomic) unsigned int maxDictSize; // @dynamic maxDictSize;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

