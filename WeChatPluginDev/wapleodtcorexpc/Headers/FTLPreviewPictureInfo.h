//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTImgPositionInfo, FLTNewLifeCardImgInfo;

@interface FTLPreviewPictureInfo : NSObject
{
    FLTNewLifeCardImgInfo *_imgInfo;
    FLTImgPositionInfo *_positionInfo;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithImgInfo:(id)arg1 positionInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTImgPositionInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) FLTNewLifeCardImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
- (id)toList;

@end

