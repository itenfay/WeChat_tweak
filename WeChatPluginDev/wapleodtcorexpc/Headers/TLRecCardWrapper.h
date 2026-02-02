//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizRecommendArticleRecycleAttr, NSString, TLRecArticleWrapper, TLRecCard, TLRecCardUserInfo_FeedbackInfoMsg, TLRecFinderCardWrapper;

@interface TLRecCardWrapper : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TLRecArticleWrapper *articleCardWrapper; // @dynamic articleCardWrapper;
@property(retain, nonatomic) NSString *canvasRecInfo; // @dynamic canvasRecInfo;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(retain, nonatomic) NSString *expType; // @dynamic expType;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(nonatomic) unsigned int failureBehavior; // @dynamic failureBehavior;
@property(retain, nonatomic) TLRecCardUserInfo_FeedbackInfoMsg *feedbackInfo; // @dynamic feedbackInfo;
@property(retain, nonatomic) TLRecFinderCardWrapper *finderCardWrapper; // @dynamic finderCardWrapper;
@property(nonatomic) _Bool hasWeight; // @dynamic hasWeight;
@property(nonatomic) _Bool isCanvasCard; // @dynamic isCanvasCard;
@property(nonatomic) _Bool isUseServerTime; // @dynamic isUseServerTime;
@property(nonatomic) unsigned long long msgSvrId; // @dynamic msgSvrId;
@property(nonatomic) unsigned int packageVersion; // @dynamic packageVersion;
@property(nonatomic) int pos; // @dynamic pos;
@property(retain, nonatomic) TLRecCard *recCard; // @dynamic recCard;
@property(nonatomic) unsigned long long recId; // @dynamic recId;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(retain, nonatomic) BizRecommendArticleRecycleAttr *recycleAttr; // @dynamic recycleAttr;
@property(nonatomic) int redDotFlag; // @dynamic redDotFlag;
@property(retain, nonatomic) NSString *resortBuffer; // @dynamic resortBuffer;
@property(nonatomic) _Bool shouldCheckSubscription; // @dynamic shouldCheckSubscription;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) NSString *templatePathType; // @dynamic templatePathType;
@property(nonatomic) unsigned int topRightShowMode; // @dynamic topRightShowMode;
@property(nonatomic) int weight; // @dynamic weight;

@end

