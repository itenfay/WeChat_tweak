//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController;
@protocol WCFinderTabViewProtocol;

@interface WCFinderTabPageModel : NSObject
{
    _Bool _preLoadWhileScrolling;
    _Bool _tabViewNotBindRedDotPath;
    UIViewController *_viewController;
    NSString *_tabTitleName;
    NSString *_selectTabTitleName;
    NSString *_unselectTabTitleName;
    NSString *_bindRedDotPath;
    UIView<WCFinderTabViewProtocol> *_tabView;
    NSString *_accessibilityLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) _Bool tabViewNotBindRedDotPath; // @synthesize tabViewNotBindRedDotPath=_tabViewNotBindRedDotPath;
@property(nonatomic) _Bool preLoadWhileScrolling; // @synthesize preLoadWhileScrolling=_preLoadWhileScrolling;
@property(retain, nonatomic) UIView<WCFinderTabViewProtocol> *tabView; // @synthesize tabView=_tabView;
@property(copy, nonatomic) NSString *bindRedDotPath; // @synthesize bindRedDotPath=_bindRedDotPath;
@property(copy, nonatomic) NSString *unselectTabTitleName; // @synthesize unselectTabTitleName=_unselectTabTitleName;
@property(copy, nonatomic) NSString *selectTabTitleName; // @synthesize selectTabTitleName=_selectTabTitleName;
@property(copy, nonatomic) NSString *tabTitleName; // @synthesize tabTitleName=_tabTitleName;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)useSelectedAndUnSelectedTitle;
- (id)init;

@end

