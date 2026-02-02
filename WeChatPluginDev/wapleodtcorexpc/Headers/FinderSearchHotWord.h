//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo, NSData, NSString;

@interface FinderSearchHotWord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @dynamic eventInfo;
@property(nonatomic) unsigned long long hotwordId; // @dynamic hotwordId;
@property(retain, nonatomic) NSString *hotwordText; // @dynamic hotwordText;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *reasonWording; // @dynamic reasonWording;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end

