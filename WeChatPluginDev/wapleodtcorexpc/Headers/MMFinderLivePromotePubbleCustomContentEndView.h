//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImageView;

@interface MMFinderLivePromotePubbleCustomContentEndView : UIView
{
    NSString *_labelText;
    UIImageView *_doneIconView;
    MMUILabel *_doneTipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *doneTipLabel; // @synthesize doneTipLabel=_doneTipLabel;
@property(retain, nonatomic) UIImageView *doneIconView; // @synthesize doneIconView=_doneIconView;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void)layoutDoneTipLabel;
- (void)layoutDoneIconView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

