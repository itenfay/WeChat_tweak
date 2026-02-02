//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface PAGFileImpl
{
}

+ (void)LoadAsync:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2 path:(id)arg3;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Load:(id)arg1;
+ (_Bool)IsNetWorkPath:(id)arg1;
+ (unsigned short)MaxSupportedTagLevel;
- (id)copyOriginal;
- (void)setDuration:(long long)arg1;
- (void)seTimeStretchMode:(int)arg1;
- (int)timeStretchMode;
- (id)getEditableIndices:(long long)arg1;
- (id)getLayersByEditableIndex:(int)arg1 layerType:(long long)arg2;
- (void)replaceImageByName:(id)arg1 data:(id)arg2;
- (void)replaceImage:(int)arg1 data:(id)arg2;
- (void)replaceText:(int)arg1 data:(id)arg2;
- (id)getTextData:(int)arg1;
- (id)path;
- (int)numVideos;
- (int)numImages;
- (int)numTexts;
- (unsigned short)tagLevel;

@end

