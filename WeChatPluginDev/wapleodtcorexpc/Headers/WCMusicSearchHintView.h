//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, WCMusicLoadingHintView;

@interface WCMusicSearchHintView : UIView
{
    unsigned long long _mode;
    MMUILabel *_hintLabel;
    WCMusicLoadingHintView *_loadingView;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicLoadingHintView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)setLoadingTextFont:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)updateLoadingText:(id)arg1;
- (void)updateHintTextColor:(id)arg1;
- (void)updateHintTextFont:(id)arg1;
- (void)updateHintText:(id)arg1;
- (void)hideAllSubviewsExcept:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

