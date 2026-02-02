//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface VoIPMPUIDotsLoadingView : UIView
{
    NSArray *_viewDots;
    unsigned long long _lightIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lightIndex; // @synthesize lightIndex=_lightIndex;
@property(retain, nonatomic) NSArray *viewDots; // @synthesize viewDots=_viewDots;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animateContinually;

@end

