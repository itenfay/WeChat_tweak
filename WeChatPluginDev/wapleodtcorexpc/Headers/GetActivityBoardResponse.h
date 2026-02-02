//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActivityBoardConfig, ActivityBoardItem, ActivityPageTemplate, FinderEventBaseResponse, NSData, NSMutableArray;

@interface GetActivityBoardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) NSMutableArray *boardItems; // @dynamic boardItems;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastCtx; // @dynamic lastCtx;
@property(retain, nonatomic) ActivityPageTemplate *msgTempalte; // @dynamic msgTempalte;
@property(nonatomic) _Bool selfBlurredDisplayFlag; // @dynamic selfBlurredDisplayFlag;
@property(retain, nonatomic) ActivityBoardItem *selfItem; // @dynamic selfItem;
@property(nonatomic) _Bool selfSignupFlag; // @dynamic selfSignupFlag;
@property(retain, nonatomic) ActivityBoardConfig *staticConfig; // @dynamic staticConfig;

@end

