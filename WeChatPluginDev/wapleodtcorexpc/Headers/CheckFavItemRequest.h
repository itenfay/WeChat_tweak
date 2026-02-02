//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FavResendObject, NSMutableArray;

@class WXPBGeneratedMessage;

@interface CheckFavItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *favIdandObjectList; // @dynamic favIdandObjectList;
@property(retain, nonatomic) FavResendObject *favResendObject; // @dynamic favResendObject;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

