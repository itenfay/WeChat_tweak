//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;

@interface EyeBrowEffectAdapter
{
    NSNumber *_alpha;
    NSNumber *_faceModel;
    NSString *_path;
    NSNumber *_shrinkRate;
    NSNumber *_blendMode;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) NSNumber *shrinkRate; // @synthesize shrinkRate=_shrinkRate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSNumber *faceModel; // @synthesize faceModel=_faceModel;
@property(retain, nonatomic) NSNumber *alpha; // @synthesize alpha=_alpha;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)load;

@end

