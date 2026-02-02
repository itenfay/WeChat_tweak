//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ImageLoadPerformanceInfo, NSString;

@interface AvatarInfo : NSObject
{
    NSString *_path;
    ImageLoadPerformanceInfo *_loadInfo;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPath:(id)arg1 loadInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ImageLoadPerformanceInfo *loadInfo; // @synthesize loadInfo=_loadInfo;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)toList;

@end

