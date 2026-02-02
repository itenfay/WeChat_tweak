//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSString, WCFinderCustomImageRichTextView;

@interface WCFinderFullDoubleLikeEduView : UIView
{
    _Bool _doubleLikeEduViewShowYet;
    NSString *_eduTips;
    CDUnknownBlockType _hitBlock;
    LOTAnimationView *_doubleLikeView;
    WCFinderCustomImageRichTextView *_eduTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *eduTipsLabel; // @synthesize eduTipsLabel=_eduTipsLabel;
@property(retain, nonatomic) LOTAnimationView *doubleLikeView; // @synthesize doubleLikeView=_doubleLikeView;
@property(copy, nonatomic) CDUnknownBlockType hitBlock; // @synthesize hitBlock=_hitBlock;
@property(retain, nonatomic) NSString *eduTips; // @synthesize eduTips=_eduTips;
@property(nonatomic) _Bool doubleLikeEduViewShowYet; // @synthesize doubleLikeEduViewShowYet=_doubleLikeEduViewShowYet;
- (void)play;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

