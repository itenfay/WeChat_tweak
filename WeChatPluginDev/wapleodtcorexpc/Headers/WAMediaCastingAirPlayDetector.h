//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPVolumeView, WAMediaCastingAirPlayDectectPrivateWindow;
@protocol WAMediaCastingAirPlayDetectorDelegate;

@interface WAMediaCastingAirPlayDetector : NSObject
{
    id <WAMediaCastingAirPlayDetectorDelegate> _delegate;
    WAMediaCastingAirPlayDectectPrivateWindow *_dectectWindow;
}

+ (id)format_WirelessTypeString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingAirPlayDectectPrivateWindow *dectectWindow; // @synthesize dectectWindow=_dectectWindow;
@property(nonatomic) __weak id <WAMediaCastingAirPlayDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWirelessRouteActiveDidChange;
@property(readonly, nonatomic) unsigned long long wirelessType;
@property(readonly, nonatomic) _Bool isAirPlaying;
@property(readonly, nonatomic) MPVolumeView *volumeView;
- (id)init;
- (void)dealloc;

@end

