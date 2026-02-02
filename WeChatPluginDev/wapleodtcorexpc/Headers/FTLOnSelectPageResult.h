//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTImgPositionInfo, NSNumber;

@interface FTLOnSelectPageResult : NSObject
{
    FLTImgPositionInfo *_positionInfo;
    NSNumber *_index;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPositionInfo:(id)arg1 index:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(retain, nonatomic) FLTImgPositionInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
- (id)toList;

@end

