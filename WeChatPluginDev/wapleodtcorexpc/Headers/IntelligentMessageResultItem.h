//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentClassificationData, IntelligentFaceAlbumData, IntelligentOCRData;

@interface IntelligentMessageResultItem
{
    IntelligentClassificationData *_classificationData;
    IntelligentOCRData *_ocrData;
    IntelligentFaceAlbumData *_faceAlbumData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IntelligentFaceAlbumData *faceAlbumData; // @synthesize faceAlbumData=_faceAlbumData;
@property(retain, nonatomic) IntelligentOCRData *ocrData; // @synthesize ocrData=_ocrData;
@property(retain, nonatomic) IntelligentClassificationData *classificationData; // @synthesize classificationData=_classificationData;

@end

