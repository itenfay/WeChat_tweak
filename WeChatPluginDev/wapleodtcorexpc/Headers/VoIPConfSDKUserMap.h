//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface VoIPConfSDKUserMap : NSObject
{
    NSArray *_riskUserInfos;
    NSArray *_validUserInfos;
}

+ (id)userMapWithUserInfos:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *validUserInfos; // @synthesize validUserInfos=_validUserInfos;
@property(retain, nonatomic) NSArray *riskUserInfos; // @synthesize riskUserInfos=_riskUserInfos;
- (id)riskUserNames;
- (id)initWithRiskUserInfos:(id)arg1 validUserInfos:(id)arg2;

@end

