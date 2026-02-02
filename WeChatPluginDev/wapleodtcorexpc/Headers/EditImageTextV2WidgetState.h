//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor;

@interface EditImageTextV2WidgetState
{
    NSString *_textContent;
    UIColor *_textColor;
    double _textLineWidth;
    double _textViewScale;
    unsigned long long _textStyle;
    struct CGRect _editViewFrame;
}

+ (id)kYpercentKey;
+ (id)kXpercentKey;
+ (unsigned long long)textStyleWithWordStyle:(unsigned int)arg1;
+ (unsigned int)wordStyleWithTextStyle:(unsigned long long)arg1;
+ (id)styleDict;
+ (id)restoryFromFinderCoverWordInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double textViewScale; // @synthesize textViewScale=_textViewScale;
@property(nonatomic) double textLineWidth; // @synthesize textLineWidth=_textLineWidth;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(nonatomic) struct CGRect editViewFrame; // @synthesize editViewFrame=_editViewFrame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)YPercent;
- (void)setYPercent:(double)arg1;
- (double)XPercent;
- (void)setXPercent:(double)arg1;
- (id)genFinderCoverInfo;

@end

