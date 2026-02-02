//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CameraScanGoodsExtensionDetectResult
{
    _Bool _bHasLocalRet;
    int _numNoBoxesCount;
    unsigned int _engineTrackRet;
}

+ (unsigned int)trackResultFromEngineScanRet:(int)arg1;
@property(nonatomic) unsigned int engineTrackRet; // @synthesize engineTrackRet=_engineTrackRet;
@property(nonatomic) int numNoBoxesCount; // @synthesize numNoBoxesCount=_numNoBoxesCount;
@property(nonatomic) _Bool bHasLocalRet; // @synthesize bHasLocalRet=_bHasLocalRet;

@end

