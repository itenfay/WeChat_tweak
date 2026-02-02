//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, UIImage;

@interface IntelligentFaceAlbumData
{
    _Bool _bIsPoliticalLeader;
    unsigned int _faceClusterTime;
    UIImage *_picImage;
    NSMutableArray *_arrLabelId;
    NSMutableDictionary *_dicFaceAlbumLable;
    double _imageWidth;
    double _imageHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsPoliticalLeader; // @synthesize bIsPoliticalLeader=_bIsPoliticalLeader;
@property(nonatomic) unsigned int faceClusterTime; // @synthesize faceClusterTime=_faceClusterTime;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSMutableDictionary *dicFaceAlbumLable; // @synthesize dicFaceAlbumLable=_dicFaceAlbumLable;
@property(retain, nonatomic) NSMutableArray *arrLabelId; // @synthesize arrLabelId=_arrLabelId;
@property(retain, nonatomic) UIImage *picImage; // @synthesize picImage=_picImage;

@end

