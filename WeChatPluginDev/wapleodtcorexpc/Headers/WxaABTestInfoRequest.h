//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface WxaABTestInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appinfoList; // @dynamic appinfoList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceDisplay; // @dynamic deviceDisplay;
@property(retain, nonatomic) NSString *deviceIncremental; // @dynamic deviceIncremental;
@property(retain, nonatomic) NSString *deviceManufacturer; // @dynamic deviceManufacturer;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceRelease; // @dynamic deviceRelease;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int publicLibReleaseVersion; // @dynamic publicLibReleaseVersion;
@property(retain, nonatomic) NSString *publicLibVersion; // @dynamic publicLibVersion;

@end

