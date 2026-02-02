//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveStrokeLabel;

@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorItemView : UIView
{
    _Bool _removalScheduled;
    unsigned long long _lineIndex;
    MMLiveStrokeLabel *_label;
    double _labelCenterX;
}

- (void).cxx_destruct;
@property(nonatomic) double labelCenterX; // @synthesize labelCenterX=_labelCenterX;
@property(retain, nonatomic) MMLiveStrokeLabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool removalScheduled; // @synthesize removalScheduled=_removalScheduled;
@property(nonatomic) unsigned long long lineIndex; // @synthesize lineIndex=_lineIndex;
- (void)layoutSubviews;
- (void)pushUpWithRemovalBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1;

@end

