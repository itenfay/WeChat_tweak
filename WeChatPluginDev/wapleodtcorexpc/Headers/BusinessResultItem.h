//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BusinessCommonItem, BusinessContactItem, BusinessProductItem;

@interface BusinessResultItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BusinessCommonItem *commonItem; // @dynamic commonItem;
@property(retain, nonatomic) BusinessContactItem *contactItem; // @dynamic contactItem;
@property(nonatomic) unsigned long long docId; // @dynamic docId;
@property(retain, nonatomic) BusinessProductItem *productItem; // @dynamic productItem;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

