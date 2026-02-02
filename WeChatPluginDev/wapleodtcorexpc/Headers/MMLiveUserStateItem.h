//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveUserStateItem : NSObject
{
    NSString *_userName;
    NSString *_displayName;
    NSString *_headImageUrl;
    unsigned long long _disableCommentDef;
    unsigned long long _rewardAmountInHeat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long rewardAmountInHeat; // @synthesize rewardAmountInHeat=_rewardAmountInHeat;
@property(readonly, nonatomic) unsigned long long disableCommentDef; // @synthesize disableCommentDef=_disableCommentDef;
@property(readonly, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

