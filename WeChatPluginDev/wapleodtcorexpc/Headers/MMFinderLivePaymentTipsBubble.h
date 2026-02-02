//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString;

@interface MMFinderLivePaymentTipsBubble : UIView
{
    unsigned int _duration;
    CDUnknownBlockType _dismissBlock;
    MMUILabel *_tipLabel;
    NSString *_tips;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isShow;
- (void)initUI;
- (id)initWithTips:(id)arg1 duration:(unsigned int)arg2;

@end

