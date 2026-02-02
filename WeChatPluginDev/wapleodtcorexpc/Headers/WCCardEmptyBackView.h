//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WCCardEmptyBackView : UIView
{
    NSString *_topText;
    NSString *_bottomText;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

