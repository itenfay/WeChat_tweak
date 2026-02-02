//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSString, UIButton, UIImageView;

@interface MMHeadImageAnnotationView
{
    UIImageView *_annotationView;
    MMHeadImageView *_headImageView;
    UIButton *_calloutButton;
    UIImageView *_headingImageView;
}

- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHeading:(double)arg1;
- (void)bringToFront;
- (void)stopAnnimation:(_Bool)arg1;
- (void)setShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *username;
- (void)initView;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

