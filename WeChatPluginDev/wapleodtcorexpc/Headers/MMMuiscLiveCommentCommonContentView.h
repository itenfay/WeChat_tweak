//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicLiveCommentBaseViewModel, NSString, RichTextView;

@interface MMMuiscLiveCommentCommonContentView : UIView
{
    _Bool _isJoinStyle;
    MMMusicLiveCommentBaseViewModel *_viewModel;
    RichTextView *_commentView;
    NSString *_contentStr;
}

+ (struct CGSize)calculateSize:(id)arg1 outArrStyles:(id *)arg2;
+ (double)calculateHeight:(id)arg1 isJoinStyle:(_Bool)arg2;
+ (id)getContentStrFromModel:(id)arg1 isJoinStyle:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isJoinStyle; // @synthesize isJoinStyle=_isJoinStyle;
@property(retain, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(retain, nonatomic) RichTextView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

