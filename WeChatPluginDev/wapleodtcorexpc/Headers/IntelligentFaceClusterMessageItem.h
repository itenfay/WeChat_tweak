//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IntelligentFaceClusterMessageItem
{
    unsigned int _msgLocalId;
    float _zScore;
    NSString *_userName;
    long long _faceLabelId;
    NSString *_mediaFilePath;
    struct CGRect _faceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(nonatomic) float zScore; // @synthesize zScore=_zScore;
@property(nonatomic) long long faceLabelId; // @synthesize faceLabelId=_faceLabelId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)copyFieldFromDbFaceClusterMessageItem:(id)arg1;

@end

