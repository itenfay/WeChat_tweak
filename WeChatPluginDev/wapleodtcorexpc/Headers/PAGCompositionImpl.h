//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface PAGCompositionImpl
{
}

+ (id)Make:(struct CGSize)arg1;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (id)getLayersByName:(id)arg1;
- (id)audioMarkers;
- (long long)audioStartTime;
- (id)audioBytes;
- (void)swapLayerAt:(int)arg1 withIndex:(int)arg2;
- (void)swapLayer:(id)arg1 withLayer:(id)arg2;
- (void)removeAllLayers;
- (id)removeLayerAt:(int)arg1;
- (id)removeLayer:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)addLayer:(id)arg1 atIndex:(int)arg2;
- (_Bool)addLayer:(id)arg1;
- (struct CGRect)getBounds;
- (void)setLayerIndex:(long long)arg1 layer:(id)arg2;
- (long long)getLayerIndex:(id)arg1;
- (id)getLayerAt:(int)arg1;
- (long long)numChildren;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)height;
- (long long)width;

@end

