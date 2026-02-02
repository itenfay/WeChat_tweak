//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAWebViewPlugin_embedView
{
}

- (void)setViewFullScreen:(id)arg1;
- (void)setViewFixed:(_Bool)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (id)getChildViewsByClass:(Class)arg1;
- (id)getChildViews;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)setViewVisible:(unsigned int)arg1 visible:(_Bool)arg2;
- (void)updateZIndex:(long long)arg1 ViewId:(unsigned int)arg2;
- (void)resizeView:(unsigned int)arg1 region:(struct CGRect)arg2;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

@end

