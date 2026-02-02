//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface WCPayBadgeView : UIView
{
    UILabel *_m_textLabel;
    UIColor *_m_textColor;
    NSString *_m_textString;
    double _m_maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double m_maxWidth; // @synthesize m_maxWidth=_m_maxWidth;
@property(retain, nonatomic) NSString *m_textString; // @synthesize m_textString=_m_textString;
@property(retain, nonatomic) UIColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(retain, nonatomic) UILabel *m_textLabel; // @synthesize m_textLabel=_m_textLabel;
- (void)updateTextLabel;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateText:(id)arg1;
- (void)updateFontColor:(id)arg1;
- (void)updateMaxWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

