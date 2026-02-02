//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DownloadInfo, HVAppInfo, LabelInfo, NSMutableArray, NSString;

@interface AppItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int appInfoFlag; // @dynamic appInfoFlag;
@property(nonatomic) unsigned int appType; // @dynamic appType;
@property(retain, nonatomic) NSString *brief; // @dynamic brief;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) DownloadInfo *downloadInfo; // @dynamic downloadInfo;
@property(nonatomic) _Bool hasDownloadGift; // @dynamic hasDownloadGift;
@property(nonatomic) _Bool hasEnableChatroom; // @dynamic hasEnableChatroom;
@property(retain, nonatomic) HVAppInfo *hvappInfo; // @dynamic hvappInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) _Bool isActive; // @dynamic isActive;
@property(nonatomic) _Bool isForceUpdate; // @dynamic isForceUpdate;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(retain, nonatomic) NSMutableArray *label; // @dynamic label;
@property(retain, nonatomic) LabelInfo *labelInfo; // @dynamic labelInfo;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *tagList; // @dynamic tagList;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int versionCode; // @dynamic versionCode;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

