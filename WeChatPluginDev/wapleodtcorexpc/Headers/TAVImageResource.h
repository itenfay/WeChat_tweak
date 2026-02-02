//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CIImage;

@interface TAVImageResource
{
    CIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)tracksForType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end

