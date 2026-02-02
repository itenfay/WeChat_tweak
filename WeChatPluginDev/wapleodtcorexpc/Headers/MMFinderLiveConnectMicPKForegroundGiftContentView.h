//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGView, RfxPagView;

@interface MMFinderLiveConnectMicPKForegroundGiftContentView : UIView
{
    PAGView *_pagView;
    RfxPagView *_rfxPAGView;
    double _heightPercent;
    double _widthHeightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double widthHeightRatio; // @synthesize widthHeightRatio=_widthHeightRatio;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(retain, nonatomic) RfxPagView *rfxPAGView; // @synthesize rfxPAGView=_rfxPAGView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
- (void)layoutSubviews;
- (id)getPAGView;
- (void)commonInitWithSize:(struct CGSize)arg1;
- (id)initWithRfxPAGFile:(id)arg1;
- (id)initWithPAGFile:(id)arg1;

@end

