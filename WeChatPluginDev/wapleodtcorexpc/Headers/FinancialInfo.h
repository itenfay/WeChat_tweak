//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinancialInfo_StaticVideo, FinancialInfo_VideoFeed, NSMutableArray, NSString;

@interface FinancialInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bottomWording; // @dynamic bottomWording;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *exitWording; // @dynamic exitWording;
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(retain, nonatomic) FinancialInfo_StaticVideo *staticVideo; // @dynamic staticVideo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) FinancialInfo_VideoFeed *videoFeed; // @dynamic videoFeed;

@end

