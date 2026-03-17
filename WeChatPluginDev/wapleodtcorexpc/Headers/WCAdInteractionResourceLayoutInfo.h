//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdInteractionResourceLayoutInfo : NSObject
{
    double _oriWidth;
    double _oriHeight;
    double _oriPaddingLeft;
    double _oriPaddingRight;
    double _oriPaddingTop;
    double _oriPaddingBottom;
    unsigned long long _safeAreaTypeTop;
    unsigned long long _safeAreaTypeBottom;
    unsigned long long _safeAreaTypeLeft;
    unsigned long long _safeAreaTypeRight;
    unsigned long long _verticalAlignType;
    unsigned long long _horizontalAlignType;
    double _absolutePositionX;
    double _absolutePositionY;
}

@property(nonatomic) double absolutePositionY; // @synthesize absolutePositionY=_absolutePositionY;
@property(nonatomic) double absolutePositionX; // @synthesize absolutePositionX=_absolutePositionX;
@property(nonatomic) unsigned long long horizontalAlignType; // @synthesize horizontalAlignType=_horizontalAlignType;
@property(nonatomic) unsigned long long verticalAlignType; // @synthesize verticalAlignType=_verticalAlignType;
@property(nonatomic) unsigned long long safeAreaTypeRight; // @synthesize safeAreaTypeRight=_safeAreaTypeRight;
@property(nonatomic) unsigned long long safeAreaTypeLeft; // @synthesize safeAreaTypeLeft=_safeAreaTypeLeft;
@property(nonatomic) unsigned long long safeAreaTypeBottom; // @synthesize safeAreaTypeBottom=_safeAreaTypeBottom;
@property(nonatomic) unsigned long long safeAreaTypeTop; // @synthesize safeAreaTypeTop=_safeAreaTypeTop;
@property(nonatomic) double oriPaddingBottom; // @synthesize oriPaddingBottom=_oriPaddingBottom;
@property(nonatomic) double oriPaddingTop; // @synthesize oriPaddingTop=_oriPaddingTop;
@property(nonatomic) double oriPaddingRight; // @synthesize oriPaddingRight=_oriPaddingRight;
@property(nonatomic) double oriPaddingLeft; // @synthesize oriPaddingLeft=_oriPaddingLeft;
@property(nonatomic) double oriHeight; // @synthesize oriHeight=_oriHeight;
@property(nonatomic) double oriWidth; // @synthesize oriWidth=_oriWidth;
@property(readonly, nonatomic) double paddingBottom;
@property(readonly, nonatomic) double paddingTop;
@property(readonly, nonatomic) double paddingRight;
@property(readonly, nonatomic) double paddingLeft;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

