//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizScanTabBarInfo, NSString;

@interface BizScanBarcodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *barcode; // @dynamic barcode;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int mode; // @dynamic mode;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) BizScanTabBarInfo *tabBarInfo; // @dynamic tabBarInfo;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

