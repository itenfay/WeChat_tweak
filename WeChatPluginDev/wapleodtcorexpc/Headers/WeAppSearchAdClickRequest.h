//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WeAppSearchAdClickRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adBuffer; // @dynamic adBuffer;
@property(retain, nonatomic) NSString *appUserName; // @dynamic appUserName;
@property(retain, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *clickExtInfo; // @dynamic clickExtInfo;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(retain, nonatomic) NSString *keywordId; // @dynamic keywordId;
@property(nonatomic) unsigned int postion; // @dynamic postion;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *statSessionId; // @dynamic statSessionId;

@end

