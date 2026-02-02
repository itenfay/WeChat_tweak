//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAssetFromSandboxFramework
{
    NSString *_localAssetURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localAssetURL; // @synthesize localAssetURL=_localAssetURL;
- (struct CGSize)getImageRatioSize;
- (id)videoDuration;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)assetId;
- (id)assetUrl;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbImage;
- (id)initWithLocalURL:(id)arg1;

@end

