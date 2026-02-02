//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveConnectMicAudioUserBackgroundView : UIView
{
    WCFinderContact *_finderContact;
    WCFinderHeadImageView *_backgroundHeadImageView;
    UIView *_audioUserBlurView;
    UIImage *_backgroundHeadImage;
}

+ (id)getUserBlurEffectImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundHeadImage; // @synthesize backgroundHeadImage=_backgroundHeadImage;
@property(retain, nonatomic) UIView *audioUserBlurView; // @synthesize audioUserBlurView=_audioUserBlurView;
@property(retain, nonatomic) WCFinderHeadImageView *backgroundHeadImageView; // @synthesize backgroundHeadImageView=_backgroundHeadImageView;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFinderContact:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andFinderContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

