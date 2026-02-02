//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIView;

@interface MMFinderLiveCommentBlurButtonBackView
{
    _Bool _canShowTalkButton;
    UIView *_seperateLineView;
    MMUIButton *_commentTalkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *commentTalkButton; // @synthesize commentTalkButton=_commentTalkButton;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(nonatomic) _Bool canShowTalkButton; // @synthesize canShowTalkButton=_canShowTalkButton;
- (void)layoutSeperateLineView;
- (void)layoutCommentTalkButton;
- (void)layoutUI;

@end

