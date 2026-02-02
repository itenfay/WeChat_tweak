//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface KFGetInfoListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *kfBrandUsername; // @dynamic kfBrandUsername;
@property(retain, nonatomic) NSMutableArray *kfOpenIdList; // @dynamic kfOpenIdList;
@property(retain, nonatomic) NSMutableArray *kfTypeList; // @dynamic kfTypeList;

@end

