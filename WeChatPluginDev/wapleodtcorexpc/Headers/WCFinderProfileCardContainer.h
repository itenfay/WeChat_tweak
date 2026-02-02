//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, WCFinderSteamProfileHeaderTheme;
@protocol WCFinderProfileCardContainerExposeDelegate;

@interface WCFinderProfileCardContainer : UIView
{
    struct multimap<NSString *, UIView *, ClassIdentifyEqual, std::allocator<std::pair<NSString *const, UIView *>>> _classMap;
    _Bool _showBlurBG;
    id <WCFinderProfileCardContainerExposeDelegate> _exposeDelegate;
    unsigned long long _scene;
    WCFinderSteamProfileHeaderTheme *_theme;
    NSMutableArray *_lineViews;
    NSMutableArray *_elements;
    NSMutableDictionary *_viewClassMap;
    NSArray *_displayViewArray;
    NSMutableSet *_exposedItems;
}

+ (void)updateView:(id)arg1 ty:(long long)arg2 withData:(id)arg3 scene:(unsigned long long)arg4;
+ (_Bool)shouldDisplayViewWithTy:(long long)arg1 withData:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedItems; // @synthesize exposedItems=_exposedItems;
@property(retain, nonatomic) NSArray *displayViewArray; // @synthesize displayViewArray=_displayViewArray;
@property(retain, nonatomic) NSMutableDictionary *viewClassMap; // @synthesize viewClassMap=_viewClassMap;
@property(nonatomic) _Bool showBlurBG; // @synthesize showBlurBG=_showBlurBG;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSMutableArray *lineViews; // @synthesize lineViews=_lineViews;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <WCFinderProfileCardContainerExposeDelegate> exposeDelegate; // @synthesize exposeDelegate=_exposeDelegate;
- (void)unInstallViews:(id)arg1;
- (void)installElements:(id)arg1;
- (void)ensureLinesWithCount:(long long)arg1;
- (void)layoutLinesWithCount:(id)arg1;
- (void)updateElementsLayout:(id)arg1;
- (id)displayedViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)popCacheView:(Class)arg1;
- (void)pushCacheView:(id)arg1;
- (void)updateWithCards:(vector_7cafffa0)arg1;
- (void)update:(CDUnknownBlockType)arg1;
- (void)registerViews;
- (id)initWithFrame:(struct CGRect)arg1 withTheme:(id)arg2 scene:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned long long)arg2;

@end

