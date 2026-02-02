//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface AttributeLabel : UILabel
{
    UIColor *_userColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *userColor; // @synthesize userColor=_userColor;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3 highlightFont:(id)arg4 highlightColor:(id)arg5;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3 highlightFont:(id)arg4;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;

@end

