//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPVolumeView;
@protocol WCPlayerVolumeObserverDelegate;

@interface WCPlayerVolumeObserver : NSObject
{
    _Bool _showSystemVolumeView;
    id <WCPlayerVolumeObserverDelegate> _delegate;
    MPVolumeView *_volumeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) _Bool showSystemVolumeView; // @synthesize showSystemVolumeView=_showSystemVolumeView;
@property(nonatomic) __weak id <WCPlayerVolumeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (float)volume;
- (void)onSystemVolumeDidChange:(id)arg1;
- (void)startObserveVolumeChangeEvent;
- (void)stopObserveVolumeChangeEvent;
- (void)dealloc;

@end

