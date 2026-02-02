//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImage;

@interface WCMediaImageViewModel_MMImage
{
    MMImage *_mmImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMImage *mmImage; // @synthesize mmImage=_mmImage;
- (void)fillExtraDataInImageMaterial:(id)arg1;
- (_Bool)isLivePhoto;
- (id)initWithMMImage:(id)arg1;

@end

