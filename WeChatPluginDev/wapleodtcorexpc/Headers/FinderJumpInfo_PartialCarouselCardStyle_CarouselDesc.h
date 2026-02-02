//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *afterCountdownPreText; // @dynamic afterCountdownPreText;
@property(retain, nonatomic) NSString *beforeCountdownPreText; // @dynamic beforeCountdownPreText;
@property(nonatomic) unsigned int carouselTime; // @dynamic carouselTime;
@property(nonatomic) unsigned long long countdownEndTs; // @dynamic countdownEndTs;
@property(retain, nonatomic) NSMutableArray *subDescs; // @dynamic subDescs;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

