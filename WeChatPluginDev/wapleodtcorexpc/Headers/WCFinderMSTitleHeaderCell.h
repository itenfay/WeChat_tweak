//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, UIStackView, WCFinderHeadImageView;

@interface WCFinderMSTitleHeaderCell
{
    WCFinderHeadImageView *_avatarView;
    UIStackView *_actionStackView;
    UILabel *_nickNameLabel;
    UILabel *_authorBadgeLabel;
    UIImageView *_finderIconImageView;
}

+ (id)displayNameString:(id)arg1;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIStackView *actionStackView; // @synthesize actionStackView=_actionStackView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onLongPress:(id)arg1;
- (void)onClickHeader;
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

