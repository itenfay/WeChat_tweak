//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenAudioBaseResponse, MMListenDiscoverResponse_JumpableTopToast, MMListenDiscoverResponse_JumpableTopToastV2, MMListenFinderAudioDiscoverMessage, MMListenFinderSingerDiscoverMessage, MMListenMusicBaseResponse, NSData, NSMutableArray, NSString;

@interface MMListenDiscoverResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse; // @dynamic audioBaseResponse;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenFinderAudioDiscoverMessage *finderAudioDiscoverMessage; // @dynamic finderAudioDiscoverMessage;
@property(retain, nonatomic) MMListenFinderSingerDiscoverMessage *finderSingerDiscoverMessage; // @dynamic finderSingerDiscoverMessage;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool isMergeDiscoverItem; // @dynamic isMergeDiscoverItem;
@property(retain, nonatomic) MMListenDiscoverResponse_JumpableTopToast *jumpableTopToast; // @dynamic jumpableTopToast;
@property(retain, nonatomic) MMListenDiscoverResponse_JumpableTopToastV2 *jumpableTopToastV2; // @dynamic jumpableTopToastV2;
@property(retain, nonatomic) NSMutableArray *jumpableTopToastsV2; // @dynamic jumpableTopToastsV2;
@property(retain, nonatomic) NSMutableArray *lines; // @dynamic lines;
@property(retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse; // @dynamic musicBaseResponse;
@property(retain, nonatomic) NSMutableArray *reddotItem; // @dynamic reddotItem;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSMutableArray *topLines; // @dynamic topLines;
@property(retain, nonatomic) NSString *topToast; // @dynamic topToast;
@property(retain, nonatomic) NSString *topToastJumpSchemeWording; // @dynamic topToastJumpSchemeWording;

@end

