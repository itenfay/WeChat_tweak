//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface WCLikeButtonParams : NSObject
{
    _Bool _isEnhanceInteractionEnabled;
    _Bool _isShowLikeCount;
    double _iconWidth;
    UIImage *_normalImage;
    UIImage *_likedImage;
    UIImage *_disabledImage;
    UIImage *_normalHighlightedImage;
    UIImage *_likedHighlightedImage;
    UIImage *_Spring_normalImage;
    UIImage *_Spring_likedImage;
    UIImage *_Spring_disabledImage;
    UIImage *_Spring_normalHighlightedImage;
    UIImage *_Spring_likedHighlightedImage;
    long long _browseScene;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) _Bool isShowLikeCount; // @synthesize isShowLikeCount=_isShowLikeCount;
@property(nonatomic) _Bool isEnhanceInteractionEnabled; // @synthesize isEnhanceInteractionEnabled=_isEnhanceInteractionEnabled;
@property(retain, nonatomic) UIImage *Spring_likedHighlightedImage; // @synthesize Spring_likedHighlightedImage=_Spring_likedHighlightedImage;
@property(retain, nonatomic) UIImage *Spring_normalHighlightedImage; // @synthesize Spring_normalHighlightedImage=_Spring_normalHighlightedImage;
@property(retain, nonatomic) UIImage *Spring_disabledImage; // @synthesize Spring_disabledImage=_Spring_disabledImage;
@property(retain, nonatomic) UIImage *Spring_likedImage; // @synthesize Spring_likedImage=_Spring_likedImage;
@property(retain, nonatomic) UIImage *Spring_normalImage; // @synthesize Spring_normalImage=_Spring_normalImage;
@property(retain, nonatomic) UIImage *likedHighlightedImage; // @synthesize likedHighlightedImage=_likedHighlightedImage;
@property(retain, nonatomic) UIImage *normalHighlightedImage; // @synthesize normalHighlightedImage=_normalHighlightedImage;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *likedImage; // @synthesize likedImage=_likedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;

@end

