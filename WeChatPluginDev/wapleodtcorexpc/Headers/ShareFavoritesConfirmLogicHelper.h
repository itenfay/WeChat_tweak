//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSData, NSDictionary, NSString, ShareConfirmView;
@protocol ShareFavoritesConfirmLogicHelperDelegate;

@interface ShareFavoritesConfirmLogicHelper
{
    ShareConfirmView *_confirmView;
    FavoritesItem *_favItem;
    id <ShareFavoritesConfirmLogicHelperDelegate> _delegate;
    NSString *_thumbImageUrl;
    _Bool _hasBeenHidden;
    NSDictionary *_userData;
    NSData *_thumbData;
    NSData *_fileData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) __weak id <ShareFavoritesConfirmLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnBackToApp:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)handleDoFavEnd;
- (void)OnSend:(id)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)rotateToOrientaion:(long long)arg1;
- (void)rotateToCurrentOrietation;
- (void)hideConfirmView;
- (void)showConfirmView;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

