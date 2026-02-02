//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderPromotionJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int destinationType; // @dynamic destinationType;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) _Bool showToastMsg; // @dynamic showToastMsg;
@property(retain, nonatomic) NSString *toastMsg; // @dynamic toastMsg;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

