//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FTSIntelligentMsgItem
{
    NSString *_ocrText;
    NSString *_faceAlbumLabels;
    NSString *_classificationLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *classificationLabels; // @synthesize classificationLabels=_classificationLabels;
@property(retain, nonatomic) NSString *faceAlbumLabels; // @synthesize faceAlbumLabels=_faceAlbumLabels;
@property(retain, nonatomic) NSString *ocrText; // @synthesize ocrText=_ocrText;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (long long)compareMsgItemAscending:(id)arg1;

@end

