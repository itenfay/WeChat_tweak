//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUILabel, UIImage;

@interface MiniTaskInteractionGuideTransitionContext : NSObject
{
    UIImage *_wechatPageSnapshot;
    MMUILabel *_guideVCSwipeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUILabel *guideVCSwipeLabel; // @synthesize guideVCSwipeLabel=_guideVCSwipeLabel;
@property(retain, nonatomic) UIImage *wechatPageSnapshot; // @synthesize wechatPageSnapshot=_wechatPageSnapshot;

@end

