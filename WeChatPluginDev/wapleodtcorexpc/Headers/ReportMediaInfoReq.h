//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, ReportImageInfo, ReportVideoInfo;

@interface ReportMediaInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
@property(retain, nonatomic) ReportImageInfo *imageInfo; // @dynamic imageInfo;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) ReportVideoInfo *videoInfo; // @dynamic videoInfo;

@end

