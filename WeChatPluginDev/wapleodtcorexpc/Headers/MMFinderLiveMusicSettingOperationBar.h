//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView;

@interface MMFinderLiveMusicSettingOperationBar : UIView
{
    _Bool _isVolumeSelected;
    CDUnknownBlockType _tapCallback;
    NSArray *_actionList;
    UIImageView *_editingIconImg;
    UIImageView *_volumnIconImg;
    UIView *_volumnIconView;
    UIImageView *_addMusicIconImg;
}

+ (double)preferHeight;
+ (double)preferWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addMusicIconImg; // @synthesize addMusicIconImg=_addMusicIconImg;
@property(retain, nonatomic) UIView *volumnIconView; // @synthesize volumnIconView=_volumnIconView;
@property(retain, nonatomic) UIImageView *volumnIconImg; // @synthesize volumnIconImg=_volumnIconImg;
@property(retain, nonatomic) UIImageView *editingIconImg; // @synthesize editingIconImg=_editingIconImg;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(nonatomic) _Bool isVolumeSelected; // @synthesize isVolumeSelected=_isVolumeSelected;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
- (void)onAddMusicTapGesture:(id)arg1;
- (void)onVolumnTapGesture:(id)arg1;
- (void)onEditIconTapGesture:(id)arg1;
- (void)layoutAddMusicIconImg;
- (void)layoutEditingIconImg;
- (void)layoutVolumnIconView;
- (void)layoutVolumnIconImg;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 actionList:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

