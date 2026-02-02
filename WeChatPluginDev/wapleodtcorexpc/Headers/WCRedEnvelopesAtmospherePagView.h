//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCPayWebPagView, WCRedEnvelopesControlData;

@interface WCRedEnvelopesAtmospherePagView : UIView
{
    _Bool _shouldStopAtNextLoop;
    WCRedEnvelopesControlData *_m_data;
    WCPayWebPagView *_atmospherePagView;
    double _bottomY;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomY; // @synthesize bottomY=_bottomY;
@property(nonatomic) _Bool shouldStopAtNextLoop; // @synthesize shouldStopAtNextLoop=_shouldStopAtNextLoop;
@property(retain, nonatomic) WCPayWebPagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(retain, nonatomic) WCRedEnvelopesControlData *m_data; // @synthesize m_data=_m_data;
- (id)demoPagFile;
- (void)onAnimationEnd:(id)arg1;
- (void)fadeStopAndRemove;
- (void)stopAndRemove;
- (void)playDetailPag;
- (void)playPag;
- (void)stop;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 bottomY:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

