//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MpEcsJumpInfo, NSMutableArray, NSString;

@interface BizServiceMenuButton : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int acttype; // @dynamic acttype;
@property(nonatomic) unsigned int id; // @dynamic id;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) MpEcsJumpInfo *menuEcsData; // @dynamic menuEcsData;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *nativeUrl; // @dynamic nativeUrl;
@property(nonatomic) unsigned int showIconType; // @dynamic showIconType;
@property(retain, nonatomic) NSMutableArray *subButtonList; // @dynamic subButtonList;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *value; // @dynamic value;

@end

