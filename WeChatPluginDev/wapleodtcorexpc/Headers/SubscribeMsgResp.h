//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, SubscribeMsgShowInfo, SubscribeMsgWording;

@interface SubscribeMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int alwaysChooseStatus; // @dynamic alwaysChooseStatus;
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int cacheMaxAge; // @dynamic cacheMaxAge;
@property(retain, nonatomic) NSString *extData; // @dynamic extData;
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(nonatomic) unsigned int isOpen; // @dynamic isOpen;
@property(retain, nonatomic) NSString *mainDescription; // @dynamic mainDescription;
@property(nonatomic) unsigned int notShowAlways; // @dynamic notShowAlways;
@property(nonatomic) unsigned int notShowReject; // @dynamic notShowReject;
@property(retain, nonatomic) SubscribeMsgShowInfo *showInfo; // @dynamic showInfo;
@property(nonatomic) unsigned int showStyle; // @dynamic showStyle;
@property(retain, nonatomic) NSString *subDescription; // @dynamic subDescription;
@property(nonatomic) unsigned int subscribeMsgEntry; // @dynamic subscribeMsgEntry;
@property(nonatomic) unsigned int templateMsgSettingEntry; // @dynamic templateMsgSettingEntry;
@property(retain, nonatomic) SubscribeMsgWording *wording; // @dynamic wording;
@property(nonatomic) unsigned int wxaErrorCode; // @dynamic wxaErrorCode;
@property(retain, nonatomic) NSString *wxaErrorMessage; // @dynamic wxaErrorMessage;
@property(nonatomic) _Bool wxaUserCancel; // @dynamic wxaUserCancel;

@end

