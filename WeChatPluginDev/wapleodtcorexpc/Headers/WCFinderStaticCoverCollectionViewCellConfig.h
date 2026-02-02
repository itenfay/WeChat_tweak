//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage, WCFinderFeedContentTempModel;
@protocol WCFinderStaticCoverCellMenuHandle;

@interface WCFinderStaticCoverCollectionViewCellConfig : NSObject
{
    _Bool _customCoverNoAutoPlay;
    _Bool _autoPlayEndToNext;
    _Bool _globalContinuePlay;
    _Bool _forbidenInnerRecommandReason;
    unsigned long long _componentFlag;
    unsigned long long _topLeftViewType;
    unsigned long long _bottomRightViewType;
    unsigned long long _bottomRightViewFlag;
    unsigned long long _bottomLeftViewFlag;
    unsigned long long _coverMaskType;
    double _descriptionFontWeight;
    UIFont *_descriptionFont;
    NSString *_bottomRightViewCustomWording;
    NSString *_bottomRightCustomIconName;
    NSString *_maskTipsTitle;
    UIFont *_maskTipsFont;
    UIImage *_maskTipsIcon;
    UIColor *_coverBackGroundColor;
    unsigned long long _descriptionMaxLine;
    NSString *_customLikeImageName;
    WCFinderFeedContentTempModel *_feedTempModel;
    NSArray *_customInfoItems;
    unsigned long long _UIModeStyle;
    double _descHorizontalPadding;
    UIColor *_customPostTimeColor;
    NSString *_customPostTimeContent;
    id <WCFinderStaticCoverCellMenuHandle> _longPressMenuHandle;
    struct UIEdgeInsets _bottomViewInsets;
}

+ (id)InterestRelatedFeedFlowConfig;
+ (id)membershipConfigIsAuthor:(_Bool)arg1 membershipFlag:(_Bool)arg2 customPostTimeColor:(id)arg3 customPostTimeContent:(id)arg4;
+ (id)membershipConfigIsAuthor:(_Bool)arg1 membershipFlag:(_Bool)arg2;
+ (id)musicTopicConfig;
+ (id)lifeHomeConfig;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderStaticCoverCellMenuHandle> longPressMenuHandle; // @synthesize longPressMenuHandle=_longPressMenuHandle;
@property(copy, nonatomic) NSString *customPostTimeContent; // @synthesize customPostTimeContent=_customPostTimeContent;
@property(retain, nonatomic) UIColor *customPostTimeColor; // @synthesize customPostTimeColor=_customPostTimeColor;
@property(nonatomic) double descHorizontalPadding; // @synthesize descHorizontalPadding=_descHorizontalPadding;
@property(nonatomic) unsigned long long UIModeStyle; // @synthesize UIModeStyle=_UIModeStyle;
@property(nonatomic) _Bool forbidenInnerRecommandReason; // @synthesize forbidenInnerRecommandReason=_forbidenInnerRecommandReason;
@property(nonatomic) _Bool globalContinuePlay; // @synthesize globalContinuePlay=_globalContinuePlay;
@property(nonatomic) _Bool autoPlayEndToNext; // @synthesize autoPlayEndToNext=_autoPlayEndToNext;
@property(nonatomic) _Bool customCoverNoAutoPlay; // @synthesize customCoverNoAutoPlay=_customCoverNoAutoPlay;
@property(retain, nonatomic) NSArray *customInfoItems; // @synthesize customInfoItems=_customInfoItems;
@property(retain, nonatomic) WCFinderFeedContentTempModel *feedTempModel; // @synthesize feedTempModel=_feedTempModel;
@property(retain, nonatomic) NSString *customLikeImageName; // @synthesize customLikeImageName=_customLikeImageName;
@property(nonatomic) unsigned long long descriptionMaxLine; // @synthesize descriptionMaxLine=_descriptionMaxLine;
@property(retain, nonatomic) UIColor *coverBackGroundColor; // @synthesize coverBackGroundColor=_coverBackGroundColor;
@property(retain, nonatomic) UIImage *maskTipsIcon; // @synthesize maskTipsIcon=_maskTipsIcon;
@property(retain, nonatomic) UIFont *maskTipsFont; // @synthesize maskTipsFont=_maskTipsFont;
@property(copy, nonatomic) NSString *maskTipsTitle; // @synthesize maskTipsTitle=_maskTipsTitle;
@property(copy, nonatomic) NSString *bottomRightCustomIconName; // @synthesize bottomRightCustomIconName=_bottomRightCustomIconName;
@property(copy, nonatomic) NSString *bottomRightViewCustomWording; // @synthesize bottomRightViewCustomWording=_bottomRightViewCustomWording;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(nonatomic) double descriptionFontWeight; // @synthesize descriptionFontWeight=_descriptionFontWeight;
@property(nonatomic) unsigned long long coverMaskType; // @synthesize coverMaskType=_coverMaskType;
@property(nonatomic) struct UIEdgeInsets bottomViewInsets; // @synthesize bottomViewInsets=_bottomViewInsets;
@property(nonatomic) unsigned long long bottomLeftViewFlag; // @synthesize bottomLeftViewFlag=_bottomLeftViewFlag;
@property(nonatomic) unsigned long long bottomRightViewFlag; // @synthesize bottomRightViewFlag=_bottomRightViewFlag;
@property(nonatomic) unsigned long long bottomRightViewType; // @synthesize bottomRightViewType=_bottomRightViewType;
@property(nonatomic) unsigned long long topLeftViewType; // @synthesize topLeftViewType=_topLeftViewType;
@property(nonatomic) unsigned long long componentFlag; // @synthesize componentFlag=_componentFlag;
- (id)init;

@end

