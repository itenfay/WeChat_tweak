//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveConnectMicPkUIConf : NSObject
{
    unsigned long long _leftPkProgressGradientColorType;
    unsigned long long _rightPkProgressGradientColorType;
    NSMutableArray *_teamUIs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *teamUIs; // @synthesize teamUIs=_teamUIs;
@property(nonatomic) unsigned long long rightPkProgressGradientColorType; // @synthesize rightPkProgressGradientColorType=_rightPkProgressGradientColorType;
@property(nonatomic) unsigned long long leftPkProgressGradientColorType; // @synthesize leftPkProgressGradientColorType=_leftPkProgressGradientColorType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

