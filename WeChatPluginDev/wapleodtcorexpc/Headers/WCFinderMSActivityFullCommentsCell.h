//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface WCFinderMSActivityFullCommentsCell
{
    UIView *_containerView;
    UILabel *_fullCommentsLabel;
}

+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *fullCommentsLabel; // @synthesize fullCommentsLabel=_fullCommentsLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)onClickFullComments;
- (void)setRoundCorner;
- (void)onContentVMChanged;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

