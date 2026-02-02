//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentClassificationData, IntelligentOCRData, NSArray;

@interface IntelligentMessageTemporaryItem
{
    _Bool _isHadOCRData;
    _Bool _isHadClassificationData;
    _Bool _isHadFaceAlbumData;
    IntelligentOCRData *_ocrData;
    IntelligentClassificationData *_classificationData;
    NSArray *_arrFaceAlbumData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrFaceAlbumData; // @synthesize arrFaceAlbumData=_arrFaceAlbumData;
@property(nonatomic) _Bool isHadFaceAlbumData; // @synthesize isHadFaceAlbumData=_isHadFaceAlbumData;
@property(retain, nonatomic) IntelligentClassificationData *classificationData; // @synthesize classificationData=_classificationData;
@property(nonatomic) _Bool isHadClassificationData; // @synthesize isHadClassificationData=_isHadClassificationData;
@property(retain, nonatomic) IntelligentOCRData *ocrData; // @synthesize ocrData=_ocrData;
@property(nonatomic) _Bool isHadOCRData; // @synthesize isHadOCRData=_isHadOCRData;

@end

