//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpActionInfo, FinderJumpInfo, FinderJumpInfo_Style, NSString;

@interface FinderJumpInfoReport : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpActionInfo *actionInfo; // @dynamic actionInfo;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *feedid; // @dynamic feedid;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int showState; // @dynamic showState;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @dynamic style;

@end

