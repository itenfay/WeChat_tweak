//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, QRButtonInfo;

@interface CoverInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *applyDesc; // @dynamic applyDesc;
@property(nonatomic) unsigned int buttonMode; // @dynamic buttonMode;
@property(retain, nonatomic) QRButtonInfo *firstButton; // @dynamic firstButton;
@property(retain, nonatomic) QRButtonInfo *secondButton; // @dynamic secondButton;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

