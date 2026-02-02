//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNumericAnimationRuleInfo, NSMutableArray, NSString;

@interface FinderLiveProductHintAnimationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *animationUrl; // @dynamic animationUrl;
@property(retain, nonatomic) NSMutableArray *backendRgbaList; // @dynamic backendRgbaList;
@property(retain, nonatomic) NSString *delimterStr; // @dynamic delimterStr;
@property(nonatomic) unsigned int hasNumericRule; // @dynamic hasNumericRule;
@property(retain, nonatomic) FinderLiveNumericAnimationRuleInfo *ruleInfo; // @dynamic ruleInfo;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

