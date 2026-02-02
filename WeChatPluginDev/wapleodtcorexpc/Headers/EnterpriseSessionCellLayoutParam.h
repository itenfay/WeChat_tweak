//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EnterpriseSessionCellLayoutParam : NSObject
{
    double cellHeight;
    double headImgLeftMargin;
    double headImgTopMargin;
    double nameLabelTopMargin;
    double nameLabelBottomMargin;
    double nameLabelLeftMargin;
    double nameLabelHeight;
    double statusImgRightMargin;
    double timeLabelRightMargin;
    double chatNotPushViewRightMargin;
    struct CGSize headImgSize;
}

+ (id)defaultSessionCellLayoutParam;
+ (id)layoutParamForCellStyle:(id)arg1 expectedHeight:(double)arg2;
+ (id)layoutParamForCellStyle:(id)arg1;
@property(nonatomic) double chatNotPushViewRightMargin; // @synthesize chatNotPushViewRightMargin;
@property(nonatomic) double timeLabelRightMargin; // @synthesize timeLabelRightMargin;
@property(nonatomic) double statusImgRightMargin; // @synthesize statusImgRightMargin;
@property(nonatomic) struct CGSize headImgSize; // @synthesize headImgSize;
@property(nonatomic) double nameLabelHeight; // @synthesize nameLabelHeight;
@property(nonatomic) double nameLabelLeftMargin; // @synthesize nameLabelLeftMargin;
@property(nonatomic) double nameLabelBottomMargin; // @synthesize nameLabelBottomMargin;
@property(nonatomic) double nameLabelTopMargin; // @synthesize nameLabelTopMargin;
@property(nonatomic) double headImgTopMargin; // @synthesize headImgTopMargin;
@property(nonatomic) double headImgLeftMargin; // @synthesize headImgLeftMargin;
@property(nonatomic) double cellHeight; // @synthesize cellHeight;

@end

