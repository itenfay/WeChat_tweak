//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderShopShelfLabelClassifyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *labelName; // @dynamic labelName;
@property(nonatomic) unsigned int labelType; // @dynamic labelType;
@property(retain, nonatomic) NSMutableArray *productIds; // @dynamic productIds;

@end

