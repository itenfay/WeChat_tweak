//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface BrandProfileTopicViewModel : NSObject
{
    double _foldViewHeight;
    double _unfoldViewHeight;
    _Bool _isUnfold;
    _Bool _hasUnfoldButton;
    _Bool _hasMultiLines;
    double _unfoldButtonCenterY;
    NSArray *_topicInfoList;
}

+ (id)generateTopicButton;
+ (id)generateTopicAttrStr:(id)arg1 containerWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *topicInfoList; // @synthesize topicInfoList=_topicInfoList;
@property(readonly, nonatomic) double unfoldButtonCenterY; // @synthesize unfoldButtonCenterY=_unfoldButtonCenterY;
@property(readonly, nonatomic) _Bool hasMultiLines; // @synthesize hasMultiLines=_hasMultiLines;
@property(nonatomic) _Bool hasUnfoldButton; // @synthesize hasUnfoldButton=_hasUnfoldButton;
@property(nonatomic) _Bool isUnfold; // @synthesize isUnfold=_isUnfold;
- (double)topicButtonFillThresholdWidth;
- (double)topicButtonMaxWidth;
- (void)fillTopicButtonFoldInfo;
@property(readonly, nonatomic) double viewHeight;
- (void)updateHasUnfoldButton;
- (void)setTopicInfoList:(id)arg1;
- (id)init;

@end

