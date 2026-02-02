//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TPStrategyConfig : NSObject
{
    long long _decoderStrategy;
    NSArray *_playerTypeList;
    long long _playerScene;
}

+ (id)configWithParams:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) NSArray *playerTypeList; // @synthesize playerTypeList=_playerTypeList;
@property(nonatomic) long long decoderStrategy; // @synthesize decoderStrategy=_decoderStrategy;

@end

