//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterpriseMemberViewItem;
@protocol EnterpriseMemberViewDelegate;

@interface EnterpriseMemberView
{
    EnterpriseMemberViewItem *_viewItem;
    id <EnterpriseMemberViewDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseMemberViewDelegate> delegate; // @synthesize delegate;
- (void)onDeleteMember;
- (void)onAddMember;
- (void)onLongPressHeadImage:(id)arg1;
- (void)onClickHeadImage;
- (void)setDeleteSmallButtonHidden:(_Bool)arg1;
- (_Bool)isDeleteSmallButtonHidden;
- (id)getEnterpriseUserName;
- (void)initView;
- (id)initWithMemberViewItem:(id)arg1 size:(struct CGSize)arg2;

@end

