//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, NSData, NSString;

@interface CardOptionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *disableSharingPrompts; // @dynamic disableSharingPrompts;
@property(nonatomic) _Bool isAuthor; // @dynamic isAuthor;
@property(nonatomic) _Bool isInnerUser; // @dynamic isInnerUser;
@property(retain, nonatomic) NSString *localFeedId; // @dynamic localFeedId;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(nonatomic) unsigned int postState; // @dynamic postState;
@property(retain, nonatomic) NSData *thumbData; // @dynamic thumbData;

@end

