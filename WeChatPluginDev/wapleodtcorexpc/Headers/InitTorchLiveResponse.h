//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseResponse, NSMutableArray;

@interface InitTorchLiveResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) NSMutableArray *bgmUrls; // @dynamic bgmUrls;
@property(nonatomic) unsigned long long certId; // @dynamic certId;
@property(nonatomic) _Bool isAutoAdd; // @dynamic isAutoAdd;
@property(nonatomic) _Bool isJoinRunWith; // @dynamic isJoinRunWith;
@property(nonatomic) _Bool isLightTorch; // @dynamic isLightTorch;
@property(nonatomic) _Bool isStart; // @dynamic isStart;
@property(nonatomic) _Bool isTorcher; // @dynamic isTorcher;
@property(nonatomic) unsigned long long joinRunWithTotal; // @dynamic joinRunWithTotal;
@property(nonatomic) unsigned int startRemainingDay; // @dynamic startRemainingDay;
@property(nonatomic) unsigned int startRemainingTime; // @dynamic startRemainingTime;
@property(nonatomic) unsigned long long torcherTotal; // @dynamic torcherTotal;

@end

