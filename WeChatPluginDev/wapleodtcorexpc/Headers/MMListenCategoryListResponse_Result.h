//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, NSString;

@interface MMListenCategoryListResponse_Result : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) NSString *jumpListenId; // @dynamic jumpListenId;
@property(nonatomic) int opType; // @dynamic opType;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

