//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, TextViewData;

@interface CouponItemViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *favId; // @dynamic favId;
@property(retain, nonatomic) NSMutableArray *selectedSubTitle; // @dynamic selectedSubTitle;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSMutableArray *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

