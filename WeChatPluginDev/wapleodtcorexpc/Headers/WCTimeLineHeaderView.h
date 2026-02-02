//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMActivityIndicator, UIImageView;

@interface WCTimeLineHeaderView
{
    MMActivityIndicator *m_reflashImageView;
    UIImageView *m_tipBkg;
}

- (void).cxx_destruct;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (void)_loadForAccessbility;
- (id)initWithFrame:(struct CGRect)arg1;

@end

