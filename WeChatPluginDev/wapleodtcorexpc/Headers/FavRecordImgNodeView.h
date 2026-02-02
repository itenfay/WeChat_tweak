//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavImagePreView, NSString;

@interface FavRecordImgNodeView
{
    FavImagePreView *m_imgPreView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FavImagePreView *m_imgPreView; // @synthesize m_imgPreView;
- (id)accessibilityLabel;
- (void)onWillLongPressFavImagePreView:(id)arg1 imageView:(id)arg2;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onClickAsRefer;
- (void)addContentSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

