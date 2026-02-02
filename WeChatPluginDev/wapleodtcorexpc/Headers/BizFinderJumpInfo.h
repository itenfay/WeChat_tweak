//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizFinderLiveInfo, NSArray, NSNumber;

@interface BizFinderJumpInfo : NSObject
{
    NSNumber *_scene;
    BizFinderLiveInfo *_targetInfo;
    NSArray *_allInfoList;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithScene:(id)arg1 targetInfo:(id)arg2 allInfoList:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *allInfoList; // @synthesize allInfoList=_allInfoList;
@property(retain, nonatomic) BizFinderLiveInfo *targetInfo; // @synthesize targetInfo=_targetInfo;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
- (id)toList;

@end

