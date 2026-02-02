//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;
@protocol EmoticonGridViewDelegate;

@interface EmoticonGridView
{
    _Bool _darkMode;
    _Bool _needAdjustPreviewColor;
    _Bool _shouldDisableRemoteDesc;
    _Bool _shouldDisableDescUpdateExtension;
    NSArray *_emoticonWrapArray;
    NSString *_packageId;
    long long _column;
    long long _row;
    double _itemWidth;
    double _itemHeight;
    double _edgeTop;
    double _edgeLeft;
    double _intervalX;
    double _intervalY;
    id <EmoticonGridViewDelegate> _delegate;
    NSMutableArray *_emoticonViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *emoticonViewArray; // @synthesize emoticonViewArray=_emoticonViewArray;
@property(nonatomic) _Bool shouldDisableDescUpdateExtension; // @synthesize shouldDisableDescUpdateExtension=_shouldDisableDescUpdateExtension;
@property(nonatomic) _Bool shouldDisableRemoteDesc; // @synthesize shouldDisableRemoteDesc=_shouldDisableRemoteDesc;
@property(nonatomic) __weak id <EmoticonGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needAdjustPreviewColor; // @synthesize needAdjustPreviewColor=_needAdjustPreviewColor;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) double intervalY; // @synthesize intervalY=_intervalY;
@property(nonatomic) double intervalX; // @synthesize intervalX=_intervalX;
@property(nonatomic) double edgeLeft; // @synthesize edgeLeft=_edgeLeft;
@property(nonatomic) double edgeTop; // @synthesize edgeTop=_edgeTop;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) long long column; // @synthesize column=_column;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSArray *emoticonWrapArray; // @synthesize emoticonWrapArray=_emoticonWrapArray;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (id)getPreviewSuperview;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)getRealIndexFromPoint:(struct CGPoint)arg1;
- (void)onLongPressWithLocation:(struct CGPoint)arg1;
- (void)hideAllFocus;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (void)reloadData;
- (id)buttonKey;
- (id)emoticonKey;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)cameraPackageId;
- (id)customPackageId;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

