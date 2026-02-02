//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface BizScanBarcodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *descXml; // @dynamic descXml;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *wordingList; // @dynamic wordingList;

@end

