//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class TingTapePlayingInfo;
@protocol WAMainFrameAudioCenterDelegate;

@interface WAMainFrameAudioCenterBaseView : UIView
{
    _Bool _isVisible;
    unsigned int _uiVersion;
    id <WAMainFrameAudioCenterDelegate> _delegate;
    TingTapePlayingInfo *_curPlayingInfo;
}

+ (long long)syncVersion2Report:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiVersion; // @synthesize uiVersion=_uiVersion;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) TingTapePlayingInfo *curPlayingInfo; // @synthesize curPlayingInfo=_curPlayingInfo;
@property(nonatomic) __weak id <WAMainFrameAudioCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (int)taskBarVersion;
- (void)reportTaskBarAction:(long long)arg1;
- (void)willBecomeVisible;
- (void)tryShowFirstTask;
- (void)onBecomeVisible;
- (void)onBecomeUnVisible;
- (double)contentHeight;

@end

