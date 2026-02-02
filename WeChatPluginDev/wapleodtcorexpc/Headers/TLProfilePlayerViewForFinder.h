//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol TLProfileBaseMediaViewDelegate;

@interface TLProfilePlayerViewForFinder
{
    _Bool _tl_muted;
    id <TLProfileBaseMediaViewDelegate> _tl_profileDelegate;
}

+ (id)mediaWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate; // @synthesize tl_profileDelegate=_tl_profileDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TLProfileBaseMediaViewDelegate>",?,W,N,V_tl_profileDelegate

@property(nonatomic) _Bool tl_muted; // @synthesize tl_muted=_tl_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_tl_muted

- (void)layoutSubviews;
- (void)onPlayToEnd;
- (void)tl_resetPlayMedia;
@property(readonly, nonatomic) double tl_mediaAspectRatio;
- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;
- (_Bool)isVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

