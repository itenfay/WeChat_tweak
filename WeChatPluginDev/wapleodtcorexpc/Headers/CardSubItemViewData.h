//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, TextViewData;

@interface CardSubItemViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachIntro; // @dynamic attachIntro;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(retain, nonatomic) NSMutableArray *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

