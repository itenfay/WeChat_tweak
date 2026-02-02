//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveMusicVolumnContentView;

@interface MMFinderLiveMusicVolumnBar : UIView
{
    _Bool _showing;
    CDUnknownBlockType _volumnAdjustCallback;
    MMFinderLiveMusicVolumnContentView *_contentView;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMusicVolumnContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType volumnAdjustCallback; // @synthesize volumnAdjustCallback=_volumnAdjustCallback;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
- (void)updateUIWithVolumn:(int)arg1;
- (void)setVolumn:(int)arg1;
- (int)currentVolumn;
- (void)recoverPreviousVolumn;
- (void)reduceVolumnToLowVoice;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

