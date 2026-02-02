//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray;

@interface TwoDStickerEffectAdapter
{
    NSMutableArray *_stickerArr;
    NSDictionary *_templateTransSet;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *templateTransSet; // @synthesize templateTransSet=_templateTransSet;
@property(retain, nonatomic) NSMutableArray *stickerArr; // @synthesize stickerArr=_stickerArr;
- (id)generateJsonDic;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)load;

@end

