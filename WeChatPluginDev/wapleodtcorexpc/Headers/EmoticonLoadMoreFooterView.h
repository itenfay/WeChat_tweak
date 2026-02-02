//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, NSString, UILabel;

@interface EmoticonLoadMoreFooterView : UIView
{
    _Bool _isLoading;
    NSString *_loadingTip;
    unsigned long long _direction;
    UILabel *_customEmoticonSyncLabel;
    MMUIActivityIndicatorView *_indicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *customEmoticonSyncLabel; // @synthesize customEmoticonSyncLabel=_customEmoticonSyncLabel;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (double)preferredDynamicLength;
- (void)layoutSubviews;
- (void)initCustomEmoticonSyncTipWithFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

