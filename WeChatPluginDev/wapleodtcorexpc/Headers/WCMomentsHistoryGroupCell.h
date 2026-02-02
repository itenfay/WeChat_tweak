//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactsItemView, UIButton, UIImageView, UIView;

@interface WCMomentsHistoryGroupCell
{
    UIImageView *_leftCheckMark;
    ContactsItemView *_historyGroupItemView;
    UIButton *_rightDetailBtn;
    UIView *_seperatorLine;
    CContact *_historyGroupContact;
    CDUnknownBlockType _detailCallback;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType detailCallback; // @synthesize detailCallback=_detailCallback;
@property(retain, nonatomic) CContact *historyGroupContact; // @synthesize historyGroupContact=_historyGroupContact;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIButton *rightDetailBtn; // @synthesize rightDetailBtn=_rightDetailBtn;
@property(retain, nonatomic) ContactsItemView *historyGroupItemView; // @synthesize historyGroupItemView=_historyGroupItemView;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
- (void)layoutSubviews;
- (void)onClickHistoryGroupDetail:(id)arg1;
- (void)initSeperatorLine;
- (void)initRightDetailBtn;
- (void)initHistoryGroupItemView;
- (void)initLeftCheckMark;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCheckMark:(_Bool)arg1;
- (void)updateWithHistoryGroupContact:(id)arg1 checked:(_Bool)arg2 clickedDetail:(CDUnknownBlockType)arg3;

@end

