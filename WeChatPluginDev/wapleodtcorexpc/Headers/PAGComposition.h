//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface PAGComposition
{
}

+ (id)Make:(struct CGSize)arg1;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (id)getLayersByName:(id)arg1;
- (id)audioMarkers;
- (void)swapLayerAt:(int)arg1 withIndex:(int)arg2;
- (void)swapLayer:(id)arg1 withLayer:(id)arg2;
- (void)removeAllLayers;
- (id)removeLayerAt:(int)arg1;
- (id)removeLayer:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)addLayer:(id)arg1 atIndex:(int)arg2;
- (_Bool)addLayer:(id)arg1;
- (struct CGRect)getBounds;
- (long long)audioStartTime;
- (id)audioBytes;
- (void)setLayerIndex:(long long)arg1 layer:(id)arg2;
- (long long)getLayerIndex:(id)arg1;
- (id)getLayerAt:(int)arg1;
- (long long)numChildren;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)height;
- (long long)width;
- (id)pagImageFromImage:(id)arg1 contentMode:(long long)arg2;
- (void)resetImageForAllImageLayersWithName:(id)arg1;
- (void)resetImageForFirstImageLayerWithName:(id)arg1;
- (void)setPagImage:(id)arg1 forAllImageLayersWithName:(id)arg2;
- (void)setPagImage:(id)arg1 forFirstImageLayerWithName:(id)arg2;
- (void)setImage:(id)arg1 withContentMode:(long long)arg2 forAllImageLayersWithName:(id)arg3;
- (void)setImage:(id)arg1 withContentMode:(long long)arg2 forFirstImageLayerWithName:(id)arg3;
- (void)setImage:(id)arg1 forAllImageLayersWithName:(id)arg2;
- (void)setImage:(id)arg1 forFirstImageLayerWithName:(id)arg2;
- (struct CGSize)sizeOfFirstImageLayerWithName:(id)arg1;
- (id)defaultImageOfFirstImageLayerWithName:(id)arg1;
- (id)allImageLayersWithName:(id)arg1;
- (id)firstImageLayerWithName:(id)arg1;
- (_Bool)containsImageLayerWithName:(id)arg1;
- (void)resetTextForAllTextLayersWithName:(id)arg1;
- (void)resetTextForFirstTextLayerWithName:(id)arg1;
- (void)setText:(id)arg1 forAllTextLayersWithName:(id)arg2;
- (void)setText:(id)arg1 forFirstTextLayerWithName:(id)arg2;
- (id)textOfFirstTextLayerWithName:(id)arg1;
- (id)allTextLayersWithName:(id)arg1;
- (id)firstTextLayerWithName:(id)arg1;
- (_Bool)containsTextLayerWithName:(id)arg1;
- (void)replaceTextsWith:(id)arg1;

@end

