//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface ModifyContactLabelListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int userCount; // @dynamic userCount;
@property(retain, nonatomic) NSMutableArray *userLabelInfoList; // @dynamic userLabelInfoList;

@end

