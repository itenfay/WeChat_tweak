//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol GameLifeBlackHalfViewControllerDelegate;

@interface GameLifeHalfScreenView
{
    _Bool _isBlack;
    _Bool _isAssociateWithWxGame;
    _Bool _userDisAssociateWithWxGame;
    id <GameLifeBlackHalfViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameLifeBlackHalfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)colorForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)toggleButton:(id)arg1;
- (void)addDetailView:(unsigned int)arg1 isBlack:(_Bool)arg2 isAssociate:(_Bool)arg3;
- (id)initWithDetail:(unsigned int)arg1 isBlack:(_Bool)arg2 isAssociate:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

