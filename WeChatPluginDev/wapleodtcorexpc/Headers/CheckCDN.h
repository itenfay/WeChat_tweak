//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CheckCDN : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *dataId; // @dynamic dataId;
@property(retain, nonatomic) NSString *dataSourceId; // @dynamic dataSourceId;
@property(nonatomic) unsigned int dataSourceType; // @dynamic dataSourceType;
@property(retain, nonatomic) NSString *fullMd5; // @dynamic fullMd5;
@property(nonatomic) unsigned int fullSize; // @dynamic fullSize;
@property(retain, nonatomic) NSString *head256Md5; // @dynamic head256Md5;
@property(nonatomic) unsigned int isThumb; // @dynamic isThumb;

@end

