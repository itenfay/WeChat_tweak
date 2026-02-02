//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavWebCacheImageInfo
{
    _Bool _isGif;
    NSString *_dataPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
- (id)getImgPath;
- (_Bool)isGifMsg;
- (_Bool)isImgMsg;
- (id)initWithDataPath:(id)arg1 isGif:(_Bool)arg2;

@end

