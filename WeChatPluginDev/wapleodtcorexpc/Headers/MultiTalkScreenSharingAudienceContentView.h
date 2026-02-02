//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, WCVideoRender;

@interface MultiTalkScreenSharingAudienceContentView : UIView
{
    WCVideoRender *_render;
    CContact *_contact;
    UIView *_renderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCVideoRender *render; // @synthesize render=_render;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isTouchInsideWithPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)updateRender:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

