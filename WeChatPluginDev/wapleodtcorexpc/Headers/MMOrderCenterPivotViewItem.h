//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMOrderCenterPivotTabView, UIViewController;

@interface MMOrderCenterPivotViewItem : NSObject
{
    _Bool _hideNumber;
    _Bool _viewControllerAttached;
    unsigned int _orderType;
    MMOrderCenterPivotTabView *_tabView;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewControllerAttached; // @synthesize viewControllerAttached=_viewControllerAttached;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MMOrderCenterPivotTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) unsigned int orderType; // @synthesize orderType=_orderType;
@property(nonatomic) _Bool hideNumber; // @synthesize hideNumber=_hideNumber;
- (id)initWithDisplayName:(id)arg1 numbering:(long long)arg2 viewController:(id)arg3 orderType:(unsigned int)arg4;

@end

