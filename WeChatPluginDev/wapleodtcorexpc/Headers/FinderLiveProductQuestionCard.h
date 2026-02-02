//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveProductQuestionCard_AskExplanationCardInfo, FinderLiveProductQuestionCard_ExplanationInfo, FinderLiveProductQuestionCard_QuestionCardInfo, NSString;

@interface FinderLiveProductQuestionCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveProductQuestionCard_AskExplanationCardInfo *askExplanationCardInfo; // @dynamic askExplanationCardInfo;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned long long cardType; // @dynamic cardType;
@property(nonatomic) unsigned long long displayTime; // @dynamic displayTime;
@property(retain, nonatomic) FinderLiveProductQuestionCard_ExplanationInfo *explanttionInfo; // @dynamic explanttionInfo;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *productName; // @dynamic productName;
@property(retain, nonatomic) FinderLiveProductQuestionCard_QuestionCardInfo *questionCardInfo; // @dynamic questionCardInfo;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned long long status; // @dynamic status;

@end

