//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, MMLiteAppView, NSArray;

@interface _TtC6WeChat28WSK1kLiteAppTabContainerView
{
    MISSING_TYPE *config;
    MISSING_TYPE *liteAppView;
    MISSING_TYPE *liteAppDidLoad;
    MISSING_TYPE *categoryId;
    MISSING_TYPE *urlQueryDict;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initConfig:(id)arg1;
- (id)init;
- (void)onContainerDidDisappear;
- (void)onContainerAppear;
- (id)getCategoryId;
- (void)exposed;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)initViewIfNeed;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
@property(nonatomic, readonly) NSArray *bizScrollArea;
@property(nonatomic, readonly) MMLiteAppView *liteAppView; // @synthesize liteAppView;

@end

