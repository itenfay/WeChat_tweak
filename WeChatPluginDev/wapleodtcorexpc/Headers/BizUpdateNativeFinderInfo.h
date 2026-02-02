//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizUpdateNativeFinderInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *finderObjectId; // @dynamic finderObjectId;
@property(nonatomic) _Bool isRedPacket; // @dynamic isRedPacket;
@property(retain, nonatomic) NSString *recReason; // @dynamic recReason;
@property(nonatomic) _Bool recReasonUpdFlag; // @dynamic recReasonUpdFlag;

@end

