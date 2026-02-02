//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView
{
    int m_pulldownHeight;
    int _state;
    id <EGORefreshTableHeaderDelegate> delegate;
    _Bool m_hasShake;
    _Bool _useForTransparentNavBar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useForTransparentNavBar; // @synthesize useForTransparentNavBar=_useForTransparentNavBar;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (id)initWithFrame:(struct CGRect)arg1;

@end

