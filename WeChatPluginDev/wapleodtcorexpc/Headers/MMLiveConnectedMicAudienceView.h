//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MMLiveConnectedMicAudienceView : UIView
{
    _Bool _needHidden;
    NSString *_text;
    UILabel *_textLabel;
    UIImageView *_talkingIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *talkingIconView; // @synthesize talkingIconView=_talkingIconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool needHidden; // @synthesize needHidden=_needHidden;
- (double)getConnectedMicAudienceViewWidth;
- (void)layoutSubviews;
- (void)updateText:(id)arg1;
- (void)updateViews;

@end

