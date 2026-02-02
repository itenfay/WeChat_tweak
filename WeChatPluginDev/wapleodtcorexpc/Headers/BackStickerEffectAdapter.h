//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface BackStickerEffectAdapter : NSObject
{
    NSMutableArray *_stickerArr;
}

+ (id)weeffectType;
@property(retain, nonatomic) NSMutableArray *stickerArr; // @synthesize stickerArr=_stickerArr;
- (id)generateJsonDic;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)load;

@end

