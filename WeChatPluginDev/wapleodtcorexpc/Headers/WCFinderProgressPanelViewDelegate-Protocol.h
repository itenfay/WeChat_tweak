//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIButton, UIButton, UIView;

@protocol WCFinderProgressPanelViewDelegate <NSObject>
- (UIView *)progressControlPanelGetMediaCollectionView;
- (UIView *)progressControlPanelGetLongVideoEntry;

@optional
- (void)progressControlPanelLandScapeStateDidHideSelf;
- (void)progressControlPanelClickBackButton:(UIButton *)arg1;
- (void)progressControlPanelClickSubtitleButton:(UIButton *)arg1;
- (void)progressControlPanelClickBulletButton:(UIButton *)arg1;
- (void)progressControlPanelClickRotateButton:(UIButton *)arg1;
- (void)progressControlPanelClickPlayRateButton:(UIButton *)arg1;
- (void)progressControlPanelClickPlayButton:(UIButton *)arg1;
- (double)immersiveProgressControlBottom;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2 dragType:(unsigned long long)arg3;
- (void)progressControlPanelClickPauseButton:(MMUIButton *)arg1;
@end

