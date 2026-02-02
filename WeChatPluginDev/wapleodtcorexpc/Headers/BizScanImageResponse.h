//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BizScanImageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int clientScanId; // @dynamic clientScanId;
@property(retain, nonatomic) NSString *descriptionXml; // @dynamic descriptionXml;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int imageType; // @dynamic imageType;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) float x; // @dynamic x;
@property(nonatomic) float y; // @dynamic y;

@end

