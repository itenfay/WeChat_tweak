//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WACanvasCoverViewContainer;

@interface WACanvasPlugin_embedView
{
    WACanvasCoverViewContainer *_coverViewContainer;
    NSString *_frameSetId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *frameSetId; // @synthesize frameSetId=_frameSetId;
@property(retain, nonatomic) WACanvasCoverViewContainer *coverViewContainer; // @synthesize coverViewContainer=_coverViewContainer;
- (id)getChildViewsByClass:(Class)arg1;
- (id)getChildViews;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateZIndex:(long long)arg1 ViewId:(unsigned int)arg2;
- (void)setViewVisible:(unsigned int)arg1 visible:(_Bool)arg2;
- (void)resizeView:(unsigned int)arg1 region:(struct CGRect)arg2;
- (_Bool)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (_Bool)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (id)curCoverView;

@end

