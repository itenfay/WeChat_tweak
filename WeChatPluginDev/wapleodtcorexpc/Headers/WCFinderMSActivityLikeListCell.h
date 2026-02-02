//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIView;

@interface WCFinderMSActivityLikeListCell
{
    UIView *_containerView;
    RichTextView *_likeView;
    UIView *_bottomSeparatorLine;
}

+ (id)getLikeListNickNameForVM:(id)arg1 showSceneIntroduce:(_Bool)arg2;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) RichTextView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setRoundCorner;
- (void)onContentVMChanged;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

