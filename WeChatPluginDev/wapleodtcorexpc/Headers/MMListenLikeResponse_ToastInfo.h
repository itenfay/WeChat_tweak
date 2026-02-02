//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenJumpInfo, NSString;

@interface MMListenLikeResponse_ToastInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *item; // @dynamic item;
@property(retain, nonatomic) MMListenJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *leftText; // @dynamic leftText;
@property(retain, nonatomic) NSString *rightText; // @dynamic rightText;

@end

