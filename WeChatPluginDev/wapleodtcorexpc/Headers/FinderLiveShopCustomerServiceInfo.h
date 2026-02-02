//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveShopCustomerServiceInfo_FinderWeChatInfo, FinderWxAppInfo, NSString;

@interface FinderLiveShopCustomerServiceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderWxAppInfo *appInfo; // @dynamic appInfo;
@property(nonatomic) unsigned int appType; // @dynamic appType;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo_FinderWeChatInfo *wecomInfo; // @dynamic wecomInfo;

@end

