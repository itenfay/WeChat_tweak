//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface SafetyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool bHasFace; // @dynamic bHasFace;
@property(nonatomic) _Bool bHasVoice; // @dynamic bHasVoice;
@property(nonatomic) _Bool bHasWxPwd; // @dynamic bHasWxPwd;
@property(nonatomic) _Bool bSwitchFace; // @dynamic bSwitchFace;
@property(nonatomic) _Bool bSwitchVoice; // @dynamic bSwitchVoice;
@property(retain, nonatomic) NSMutableArray *devicelist; // @dynamic devicelist;

@end

