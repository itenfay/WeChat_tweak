//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSData, NSString;

@interface FinderNotification : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *commUdfKvJson; // @dynamic commUdfKvJson;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *miniappName; // @dynamic miniappName;
@property(nonatomic) unsigned int notificationType; // @dynamic notificationType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *udfKvJson; // @dynamic udfKvJson;

@end

