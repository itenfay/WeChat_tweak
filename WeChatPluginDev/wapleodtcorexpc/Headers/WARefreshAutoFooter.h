//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WARefreshAutoFooter
{
    _Bool _automaticallyRefresh;
    double _triggerAutomaticallyRefreshPercent;
}

@property(nonatomic) double triggerAutomaticallyRefreshPercent; // @synthesize triggerAutomaticallyRefreshPercent=_triggerAutomaticallyRefreshPercent;
@property(nonatomic, getter=isAutomaticallyRefresh) _Bool automaticallyRefresh; // @synthesize automaticallyRefresh=_automaticallyRefresh;
- (void)setHidden:(_Bool)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)prepare;
- (_Bool)adjustContentInset;
- (void)willMoveToSuperview:(id)arg1;

@end

