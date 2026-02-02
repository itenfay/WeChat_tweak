//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface WCTagsView : UIView
{
    NSArray *_tagsArray;
    NSDictionary *_dicTagIconUrl;
    double _maxWidth;
    CDUnknownBlockType _tagClickAction;
    double _tagHeight;
    double _tagSpace;
    NSMutableArray *_tagViewArray;
    NSArray *_tagViewModelArray;
    NSArray *_visableTagViewModelArray;
    double _viewWidth;
}

+ (double)p_viewWidthForTags:(id)arg1 tagHeight:(double)arg2 tagSpace:(double)arg3 maxWidth:(double)arg4 viewModelArray:(id)arg5 visableViewModelArray:(id)arg6 dicTagIconUrl:(id)arg7;
+ (double)viewWidthForTags:(id)arg1 tagHeight:(id)arg2 tagSpace:(id)arg3 maxWidth:(id)arg4;
+ (double)viewWidthForTags:(id)arg1 maxWidth:(id)arg2;
+ (double)viewWidthForTags:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) NSArray *visableTagViewModelArray; // @synthesize visableTagViewModelArray=_visableTagViewModelArray;
@property(retain, nonatomic) NSArray *tagViewModelArray; // @synthesize tagViewModelArray=_tagViewModelArray;
@property(retain, nonatomic) NSMutableArray *tagViewArray; // @synthesize tagViewArray=_tagViewArray;
@property(nonatomic) double tagSpace; // @synthesize tagSpace=_tagSpace;
@property(nonatomic) double tagHeight; // @synthesize tagHeight=_tagHeight;
@property(copy, nonatomic) CDUnknownBlockType tagClickAction; // @synthesize tagClickAction=_tagClickAction;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) NSDictionary *dicTagIconUrl; // @synthesize dicTagIconUrl=_dicTagIconUrl;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
- (void)p_updateViewUI;
- (void)p_updateViewModels;
- (void)p_update;
- (struct CGSize)getExpectedViewSize;
- (struct CGSize)updateTags:(id)arg1 maxWidth:(double)arg2 dicTagIconUrl:(id)arg3;
- (struct CGSize)updateTags:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize)updateTags:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTagHeight:(double)arg1 tagSpace:(double)arg2;
- (id)initWithTagHeight:(double)arg1;

@end

