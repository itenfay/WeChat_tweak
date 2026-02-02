//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ReportDeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *languageVersion; // @dynamic languageVersion;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int screenHeight; // @dynamic screenHeight;
@property(nonatomic) unsigned int screenWidth; // @dynamic screenWidth;

@end

