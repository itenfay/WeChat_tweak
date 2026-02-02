//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCFinderJumpInfoLBSCardScoreView : UIView
{
    UIView *_backView;
    NSArray *_scoreIcons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *scoreIcons; // @synthesize scoreIcons=_scoreIcons;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void)updateScore:(double)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

