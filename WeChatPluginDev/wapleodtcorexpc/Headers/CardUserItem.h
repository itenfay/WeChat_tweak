//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CardUserItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int stateFlag; // @dynamic stateFlag;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned long long updateSequence; // @dynamic updateSequence;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

