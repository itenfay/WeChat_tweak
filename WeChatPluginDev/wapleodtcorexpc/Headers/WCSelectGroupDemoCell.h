//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView, UIView;

@interface WCSelectGroupDemoCell
{
    UIImageView *leftCheckMark;
    UIImageView *rightArrowView;
    UIButton *rightDetailBtn;
    UIView *lineView;
    UIView *headLineView;
    MMUILabel *nameLabel;
    MMUILabel *memberLabel;
    _Bool detailDisabled;
    CDUnknownBlockType _detailCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType detailCallback; // @synthesize detailCallback=_detailCallback;
@property(nonatomic) _Bool detailDisabled; // @synthesize detailDisabled;
- (void)onClickContactDetail:(id)arg1;
- (void)updateCell:(int)arg1 cellWidth:(double)arg2 postPrivacy:(long long)arg3 labelName:(id)arg4 checked:(_Bool)arg5 expandMode:(_Bool)arg6 tempContacts:(id)arg7 clickedDetail:(CDUnknownBlockType)arg8;
- (id)getMemberDesc:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

