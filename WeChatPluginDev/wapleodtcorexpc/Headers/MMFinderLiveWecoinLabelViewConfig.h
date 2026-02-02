//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface MMFinderLiveWecoinLabelViewConfig : NSObject
{
    UIColor *_iconColor;
    double _iconLabelPadding;
    UIFont *_labelFont;
    UIColor *_labelTextColor;
    struct CGSize _iconSize;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) double iconLabelPadding; // @synthesize iconLabelPadding=_iconLabelPadding;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;

@end

