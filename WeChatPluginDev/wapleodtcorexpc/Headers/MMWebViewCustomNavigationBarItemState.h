//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor, UIImage;

@interface MMWebViewCustomNavigationBarItemState
{
    _Bool _isRightBarItemJSApiDefined;
    _Bool _isRightBarItemHidden;
    _Bool _isRightSearchItemHidden;
    _Bool _disableMinimizeBlock;
    NSString *_pageSubTitle;
    UIColor *_navigationBarColor;
    NSString *_rightBarItemTitle;
    UIColor *_rightBarItemTintColor;
    UIImage *_rightBarItemIconImage;
    CDUnknownBlockType _rightBarItemClickCallBack;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableMinimizeBlock; // @synthesize disableMinimizeBlock=_disableMinimizeBlock;
@property(nonatomic) _Bool isRightSearchItemHidden; // @synthesize isRightSearchItemHidden=_isRightSearchItemHidden;
@property(nonatomic) _Bool isRightBarItemHidden; // @synthesize isRightBarItemHidden=_isRightBarItemHidden;
@property(copy, nonatomic) CDUnknownBlockType rightBarItemClickCallBack; // @synthesize rightBarItemClickCallBack=_rightBarItemClickCallBack;
@property(retain, nonatomic) UIImage *rightBarItemIconImage; // @synthesize rightBarItemIconImage=_rightBarItemIconImage;
@property(retain, nonatomic) UIColor *rightBarItemTintColor; // @synthesize rightBarItemTintColor=_rightBarItemTintColor;
@property(copy, nonatomic) NSString *rightBarItemTitle; // @synthesize rightBarItemTitle=_rightBarItemTitle;
@property(nonatomic) _Bool isRightBarItemJSApiDefined; // @synthesize isRightBarItemJSApiDefined=_isRightBarItemJSApiDefined;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(copy, nonatomic) NSString *pageSubTitle; // @synthesize pageSubTitle=_pageSubTitle;
- (_Bool)shouldBlockMinimization;

@end

