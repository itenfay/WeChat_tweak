//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface MMFinderLiveKSKitLyricSentenceTextView : UIView
{
    UIColor *_textColor;
    NSMutableArray *_lyricLabelList;
}

+ (id)lyricWordFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lyricLabelList; // @synthesize lyricLabelList=_lyricLabelList;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)updateLyricLabelsCenterY;
- (void)updateSelfSize:(struct CGSize)arg1;
- (id)createLyricLabel:(id)arg1;
- (void)createLyricLabels:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLyricWords:(id)arg1 textColor:(id)arg2;

@end

