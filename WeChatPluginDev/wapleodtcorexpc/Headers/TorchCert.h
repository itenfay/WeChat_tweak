//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface TorchCert : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long certId; // @dynamic certId;
@property(retain, nonatomic) NSString *fromIcon; // @dynamic fromIcon;
@property(retain, nonatomic) NSString *fromNickname; // @dynamic fromNickname;
@property(nonatomic) _Bool isAccessLocation; // @dynamic isAccessLocation;
@property(nonatomic) _Bool isBanned; // @dynamic isBanned;
@property(nonatomic) _Bool isJoinRunWith; // @dynamic isJoinRunWith;
@property(nonatomic) _Bool isLightTorch; // @dynamic isLightTorch;
@property(nonatomic) _Bool isShowSportStep; // @dynamic isShowSportStep;
@property(retain, nonatomic) NSMutableArray *locations; // @dynamic locations;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long sportStep; // @dynamic sportStep;

@end

