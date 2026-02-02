//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface YtImageInfo
{
    NSString *_image;
    NSArray *_five_points;
    NSString *_checksum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSArray *five_points; // @synthesize five_points=_five_points;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 imgPts:(id)arg2 checksum:(id)arg3;
- (id)initWithImage:(id)arg1 faceShape:(vector_8ca568ff)arg2 checksum:(id)arg3;

@end

