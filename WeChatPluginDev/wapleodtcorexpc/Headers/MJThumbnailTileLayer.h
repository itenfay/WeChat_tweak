//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UIImage;

@interface MJThumbnailTileLayer
{
    struct CGRect _separatorLineBounds;
    long long _taskID;
    UIImage *_image;
    double _separatorLineWidthPixels;
    CAShapeLayer *_separatorLineLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *separatorLineLayer; // @synthesize separatorLineLayer=_separatorLineLayer;
@property(nonatomic) double separatorLineWidthPixels; // @synthesize separatorLineWidthPixels=_separatorLineWidthPixels;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long taskID; // @synthesize taskID=_taskID;
- (void)updateSeparatorLine;
- (void)layoutSublayers;
- (void)prepareForReuse;
- (void)setReusableAttributes:(id)arg1;
- (id)init;

@end

