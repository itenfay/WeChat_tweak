//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CurrCategorySessionAttrContext, NSString;

@interface TingPlayTaskContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *currCategorySessionAttr; // @dynamic currCategorySessionAttr;
@property(retain, nonatomic) NSString *currCategorySessionId; // @dynamic currCategorySessionId;
@property(nonatomic) unsigned long long enterScene; // @dynamic enterScene;
@property(nonatomic) _Bool everPlay; // @dynamic everPlay;
@property(nonatomic) _Bool isRecommendSource; // @dynamic isRecommendSource;
@property(retain, nonatomic) CurrCategorySessionAttrContext *sessionAttrContext; // @dynamic sessionAttrContext;
@property(nonatomic) _Bool shouldPlayRecommendSource; // @dynamic shouldPlayRecommendSource;
@property(nonatomic) _Bool useForPlay; // @dynamic useForPlay;

@end

