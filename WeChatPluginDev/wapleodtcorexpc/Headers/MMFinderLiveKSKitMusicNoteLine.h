//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKSKitMusicNote, NSMutableArray, UIColor;

@interface MMFinderLiveKSKitMusicNoteLine : UIView
{
    MMFinderLiveKSKitMusicNote *_musicNote;
    UIView *_progressLine;
    UIColor *_hitlineColor;
    NSMutableArray *_hitLineList;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hitLineList; // @synthesize hitLineList=_hitLineList;
@property(retain, nonatomic) UIColor *hitlineColor; // @synthesize hitlineColor=_hitlineColor;
@property(retain, nonatomic) UIView *progressLine; // @synthesize progressLine=_progressLine;
@property(retain, nonatomic) MMFinderLiveKSKitMusicNote *musicNote; // @synthesize musicNote=_musicNote;
- (id)createHitLineWithHitRange:(struct _NSRange)arg1;
- (void)addHitRange:(struct _NSRange)arg1;
- (double)preferWidth;
- (void)layoutHitLines;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initDefaultDatas;
- (void)initDefaultUI;
- (id)initWithMusicNote:(id)arg1;

@end

