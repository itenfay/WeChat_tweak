//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGView, TingItem;

@interface TingPlayStatusView : UIView
{
    double _pagWidth;
    PAGView *_pagView;
    UIView *_coverLayerView;
    NSString *_listenId;
    TingItem *_tingItem;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(retain, nonatomic) NSString *listenId; // @synthesize listenId=_listenId;
@property(retain, nonatomic) UIView *coverLayerView; // @synthesize coverLayerView=_coverLayerView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) double pagWidth; // @synthesize pagWidth=_pagWidth;
- (id)player;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)layoutSubviews;
- (int)getCurPlayStatus;
- (void)setPlayStatus:(int)arg1;
- (void)updateTingItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

