//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderExtendedReading, FinderJumpInfo;

@interface NewLifeSelectLinkCallback : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderExtendedReading *extendedReading; // @dynamic extendedReading;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int jumpInfoBusinessType; // @dynamic jumpInfoBusinessType;

@end

