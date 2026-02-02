//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AudioMixReqInfo, NSString, SquarePreloadResponse;

@interface AudioSquareStoreInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SquarePreloadResponse *preloadResponse; // @dynamic preloadResponse;
@property(retain, nonatomic) AudioMixReqInfo *reqInfo; // @dynamic reqInfo;
@property(retain, nonatomic) NSString *tipsid; // @dynamic tipsid;

@end

