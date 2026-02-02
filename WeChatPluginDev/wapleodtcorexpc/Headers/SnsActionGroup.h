//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SnsAction;

@interface SnsActionGroup : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnsAction *currentAction; // @dynamic currentAction;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int objectCreateTime; // @dynamic objectCreateTime;
@property(nonatomic) unsigned long long parentId; // @dynamic parentId;
@property(retain, nonatomic) SnsAction *referAction; // @dynamic referAction;

@end

