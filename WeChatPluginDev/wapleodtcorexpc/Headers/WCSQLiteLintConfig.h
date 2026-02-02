//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCSQLiteLintConfig
{
    NSArray *_ennableCheckers;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) NSArray *ennableCheckers; // @synthesize ennableCheckers=_ennableCheckers;

@end

