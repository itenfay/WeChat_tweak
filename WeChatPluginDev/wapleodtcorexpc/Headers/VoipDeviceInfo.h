//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface VoipDeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *codecInfo; // @dynamic codecInfo;
@property(nonatomic) unsigned int codecInfoCnt; // @dynamic codecInfoCnt;
@property(nonatomic) unsigned int cpuFlag; // @dynamic cpuFlag;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *verMinor; // @dynamic verMinor;
@property(retain, nonatomic) NSString *verRelease; // @dynamic verRelease;

@end

