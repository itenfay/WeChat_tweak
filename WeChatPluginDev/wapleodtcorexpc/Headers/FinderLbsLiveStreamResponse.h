//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpLiveTab, FinderLiveCardHighlightTagInfoBundle, FinderLivePreloadInfo, FinderLiveSquareStyleInfo, FinderLiveStreamGetAsyncLoadInfoConfig, FinderStreamLayoutInfo, NSData, NSMutableArray;

@interface FinderLbsLiveStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @dynamic asyncLoadInfoConfig;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) FinderJumpLiveTab *jumpLiveTab; // @dynamic jumpLiveTab;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(nonatomic) unsigned int liveCardAutoPlayFlag; // @dynamic liveCardAutoPlayFlag;
@property(retain, nonatomic) FinderLiveCardHighlightTagInfoBundle *liveCardHighlightTag; // @dynamic liveCardHighlightTag;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int prefechMinInterval; // @dynamic prefechMinInterval;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) _Bool skipFeedsReport; // @dynamic skipFeedsReport;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @dynamic styleInfo;

@end

