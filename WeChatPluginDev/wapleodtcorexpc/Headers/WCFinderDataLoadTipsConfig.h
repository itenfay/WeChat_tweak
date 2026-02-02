//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WCFinderDataLoadTipsConfig : NSObject
{
    UIFont *_tipsFont;
    UIColor *_tipsColor;
    struct CGSize _loadingIconSize;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *tipsColor; // @synthesize tipsColor=_tipsColor;
@property(retain, nonatomic) UIFont *tipsFont; // @synthesize tipsFont=_tipsFont;
@property(nonatomic) struct CGSize loadingIconSize; // @synthesize loadingIconSize=_loadingIconSize;

@end

