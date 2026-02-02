//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TingItemExt : NSObject
{
    NSString *_extInfo;
    NSNumber *_playIndex;
    NSNumber *_fromScene;
    NSNumber *_withFloatBall;
    NSString *_singerCategoryId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithExtInfo:(id)arg1 playIndex:(id)arg2 fromScene:(id)arg3 withFloatBall:(id)arg4 singerCategoryId:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *singerCategoryId; // @synthesize singerCategoryId=_singerCategoryId;
@property(retain, nonatomic) NSNumber *withFloatBall; // @synthesize withFloatBall=_withFloatBall;
@property(retain, nonatomic) NSNumber *fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSNumber *playIndex; // @synthesize playIndex=_playIndex;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
- (id)toList;

@end

