//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString;
@protocol TLProfileBaseMediaViewDelegate;

@interface TLProfileImageView : UIImageView
{
}

- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;
@property(readonly, nonatomic) double tl_mediaAspectRatio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool tl_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TLProfileBaseMediaViewDelegate>",?,W,N


@end

