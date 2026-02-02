//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicSeatInfo, UIImageView;

@interface MMFinderLiveCDNPlayerMicUnoccupiedSeatView : UIView
{
    MMFinderLiveConnectMicSeatInfo *_micSeatInfo;
    UIImageView *_addIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatInfo *micSeatInfo; // @synthesize micSeatInfo=_micSeatInfo;
- (void)layoutUI;
- (void)configUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

