//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderFromAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(retain, nonatomic) NSString *sdkExtInfo; // @dynamic sdkExtInfo;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long uiStyle; // @dynamic uiStyle;

@end

