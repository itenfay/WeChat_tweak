//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, NewLifeLocalTabTipsInfo, NewLifePostJumpFlowParams, NewLifeStreamResponse;

@interface PrefetchStreamCallbackCmdIdReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned int enterTabIndex; // @dynamic enterTabIndex;
@property(nonatomic) _Bool jumpDetailFirst; // @dynamic jumpDetailFirst;
@property(retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo; // @dynamic localTabTipsInfo;
@property(retain, nonatomic) NSMutableArray *notificationBubbleShowInfo; // @dynamic notificationBubbleShowInfo;
@property(retain, nonatomic) NewLifePostJumpFlowParams *postJumpParams; // @dynamic postJumpParams;
@property(retain, nonatomic) NewLifeStreamResponse *response; // @dynamic response;
@property(retain, nonatomic) NSString *searchPassInfo; // @dynamic searchPassInfo;

@end

