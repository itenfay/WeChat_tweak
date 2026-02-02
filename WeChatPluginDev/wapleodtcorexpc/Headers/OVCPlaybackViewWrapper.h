//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class OVCPlaybackView;

@interface OVCPlaybackViewWrapper : UIView
{
    OVCPlaybackView *_backingPlaybackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OVCPlaybackView *backingPlaybackView; // @synthesize backingPlaybackView=_backingPlaybackView;
- (void)teardown;
- (void)layoutSubviews;
- (id)init;

@end

