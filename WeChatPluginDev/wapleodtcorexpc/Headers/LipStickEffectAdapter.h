//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber;

@interface LipStickEffectAdapter
{
    NSNumber *_alpha;
    NSNumber *_faceModel;
    NSNumber *_lipstickType;
    NSArray *_color;
    NSNumber *_mouthShape;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *mouthShape; // @synthesize mouthShape=_mouthShape;
@property(retain, nonatomic) NSArray *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *lipstickType; // @synthesize lipstickType=_lipstickType;
@property(retain, nonatomic) NSNumber *faceModel; // @synthesize faceModel=_faceModel;
@property(retain, nonatomic) NSNumber *alpha; // @synthesize alpha=_alpha;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)load;

@end

