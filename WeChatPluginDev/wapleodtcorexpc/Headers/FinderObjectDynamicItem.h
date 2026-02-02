//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderObjectDynamicItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)mapKeyWithKey:(id)arg1 type:(int)arg2;
+ (id)mapKeyWithId:(int)arg1 type:(int)arg2;
- (id)mapKey;

// Remaining properties
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int name; // @dynamic name;
@property(retain, nonatomic) NSString *richText; // @dynamic richText;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

