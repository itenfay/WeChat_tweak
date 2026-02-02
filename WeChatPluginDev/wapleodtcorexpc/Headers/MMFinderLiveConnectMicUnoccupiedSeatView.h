//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicSeatInfo, MMFinderLiveConnectMicSeatNameLabel, UIImageView, UILabel;
@protocol MMFinderLiveConnectMicUnoccupiedSeatViewDelegate;

@interface MMFinderLiveConnectMicUnoccupiedSeatView : UIView
{
    id <MMFinderLiveConnectMicUnoccupiedSeatViewDelegate> _actionDelegate;
    MMFinderLiveConnectMicSeatInfo *_micSeatInfo;
    UIImageView *_addIconView;
    UILabel *_titleLabel;
    MMFinderLiveConnectMicSeatNameLabel *_seatNameLabel;
    unsigned long long _pkState;
    unsigned long long _micLayoutMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) unsigned long long pkState; // @synthesize pkState=_pkState;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatNameLabel *seatNameLabel; // @synthesize seatNameLabel=_seatNameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatInfo *micSeatInfo; // @synthesize micSeatInfo=_micSeatInfo;
@property(nonatomic) __weak id <MMFinderLiveConnectMicUnoccupiedSeatViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)isSmallMode;
- (void)updateWithSeatInfo:(id)arg1 micLayoutMode:(unsigned long long)arg2 pkState:(unsigned long long)arg3;
- (void)layoutUI;
- (void)onTapBackground:(id)arg1;
- (void)configUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

