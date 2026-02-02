//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UILabel;

@interface WCFinderMSTextContentCell
{
    RichTextView *_textView;
    UILabel *_closureLabel;
}

+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *closureLabel; // @synthesize closureLabel=_closureLabel;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
- (void)onLongPress:(id)arg1;
- (void)onClickClosure;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onContentVMChanged;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

