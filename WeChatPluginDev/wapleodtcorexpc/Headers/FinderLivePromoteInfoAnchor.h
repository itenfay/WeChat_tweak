//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLivePromoteInfoAnchor : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool hasPromoted; // @dynamic hasPromoted;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) _Bool isDeleted; // @dynamic isDeleted;
@property(nonatomic) _Bool isPromoting; // @dynamic isPromoting;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;
@property(nonatomic) _Bool showAudience; // @dynamic showAudience;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *statusTips; // @dynamic statusTips;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

