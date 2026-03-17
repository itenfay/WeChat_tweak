//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveReplayPreviewResolutionRecordInfo : NSObject
{
    double _timeOffset;
    struct CGSize _resolutionSize;
    struct CGRect _contentFrame;
    struct CGRect _contentNormalizeFrame;
}

+ (_Bool)isSize:(struct CGSize)arg1 whPercentSimilarTo:(struct CGSize)arg2;
+ (struct CGRect)getContentFrameWithResolutionSize:(struct CGSize)arg1 contentNormalizeFrame:(struct CGRect)arg2;
+ (_Bool)isSizeValid:(struct CGSize)arg1;
+ (id)createResolutionRecordWithResolutionNode:(id)arg1 resolutionSize:(struct CGSize)arg2;
+ (id)createResolutionRecordWithTimeOffset:(double)arg1 resolutionSize:(struct CGSize)arg2 contentFrame:(struct CGRect)arg3;
@property(nonatomic) struct CGRect contentNormalizeFrame; // @synthesize contentNormalizeFrame=_contentNormalizeFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGSize resolutionSize; // @synthesize resolutionSize=_resolutionSize;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)createContentNormalizeFrame;
- (_Bool)isValid;
- (_Bool)initResolutionSize:(struct CGSize)arg1;

@end

