//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderTabTipsByPassInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)debugDescription;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSData *byPassCustomInfo; // @dynamic byPassCustomInfo;
@property(retain, nonatomic) NSData *innerExpInfo; // @dynamic innerExpInfo;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(nonatomic) unsigned int tabTipsObjectIdType; // @dynamic tabTipsObjectIdType;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

