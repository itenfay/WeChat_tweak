//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber;

@interface FilterEffectAdapter
{
    NSNumber *_alpha;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *alpha; // @synthesize alpha=_alpha;
- (id)getFilterDirectory;
- (id)generateJsonDic;
- (void)onImageFetchDone:(_Bool)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)load;

@end

