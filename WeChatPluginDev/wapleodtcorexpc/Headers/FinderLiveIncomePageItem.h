//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEncashPrepareInfo, FinderJumpInfo, NSString;

@interface FinderLiveIncomePageItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionAppId; // @dynamic actionAppId;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(retain, nonatomic) FinderEncashPrepareInfo *encashPrepareInfo; // @dynamic encashPrepareInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int pageType; // @dynamic pageType;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(nonatomic) unsigned int wecoinBusinessId; // @dynamic wecoinBusinessId;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

