//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo, NSMutableArray;

@interface FinderGetWindowProductProfileCardInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long productCount; // @dynamic productCount;
@property(retain, nonatomic) NSMutableArray *products; // @dynamic products;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ShopWindowProfileInfo *profileInfo; // @dynamic profileInfo;

@end

