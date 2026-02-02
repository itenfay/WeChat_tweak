//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC6WeChat28WSNativeHotListContainerView : UIView
{
    MISSING_TYPE *isVisable;
    MISSING_TYPE *delegate;
    MISSING_TYPE *vc;
    MISSING_TYPE *settingVC;
    MISSING_TYPE *hasAppear;
    MISSING_TYPE *$__lazy_storage_$_session;
    MISSING_TYPE *tableView;
    MISSING_TYPE *$__lazy_storage_$_settingButton;
    MISSING_TYPE *listAdapter;
    MISSING_TYPE *$__lazy_storage_$_dataSource;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onPopOrDismissed;
- (void)onViewAppear;
- (void)showDynamicViewAnimated:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)applicationDidBecomeActive;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithVc:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable;

@end

