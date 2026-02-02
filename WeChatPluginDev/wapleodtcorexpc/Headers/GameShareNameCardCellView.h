//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameShareNameCardViewModel, NSString, UIImageView, UILabel;

@interface GameShareNameCardCellView
{
    UIImageView *_headImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)initDescLabel;
- (void)initNicknameLabel;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GameShareNameCardViewModel *viewModel; // @dynamic viewModel;

@end

