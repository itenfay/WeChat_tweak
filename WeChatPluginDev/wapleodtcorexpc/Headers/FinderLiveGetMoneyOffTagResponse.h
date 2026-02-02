//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MoneyOffTagInfo, NSString;

@interface FinderLiveGetMoneyOffTagResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool autoOpenPage; // @dynamic autoOpenPage;
@property(retain, nonatomic) NSString *autoOpenPageUniqueId; // @dynamic autoOpenPageUniqueId;
@property(retain, nonatomic) MoneyOffTagInfo *moneyOffTagInfo; // @dynamic moneyOffTagInfo;

@end

