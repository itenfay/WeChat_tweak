//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, SKBuiltinBuffer_t;

@interface OnlineInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isKeepAliveEnabled;
- (_Bool)showKeepAliveEntrance;
- (_Bool)isAutoLoginEnabled;
- (_Bool)showAutoLoginEntrance;
- (id)GetOnlineIcon;
- (id)GetOnlineSummaryWording;
- (id)GetUnlockTitle;
- (id)GetOnlineTitle;
- (unsigned long long)GetExtDeviceControls;
- (_Bool)isLocked;
- (id)GetWordingForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *clientKey; // @dynamic clientKey;
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(nonatomic) unsigned int deviceHelperType; // @dynamic deviceHelperType;
@property(retain, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(nonatomic) unsigned int deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(nonatomic) unsigned int onlineStatus; // @dynamic onlineStatus;
@property(retain, nonatomic) NSString *roamDeviceId; // @dynamic roamDeviceId;
@property(nonatomic) unsigned int stype; // @dynamic stype;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *wordingXml; // @dynamic wordingXml;

@end

