//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScanQRCodeResultInfo
{
    _Bool _scanFromAlbum;
    _Bool _scanFromCombineTab;
    _Bool _hasProceed;
    unsigned int _timeStamp;
    unsigned int _fromScene;
    int _codeVersion;
    int _networkType;
    NSString *_resultString;
    NSString *_type;
}

+ (void)initialize;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_scanFromAlbum;
+ (void)PBArrayAdd_codeVersion;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_resultString;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasProceed; // @synthesize hasProceed=_hasProceed;
@property(nonatomic) _Bool scanFromCombineTab; // @synthesize scanFromCombineTab=_scanFromCombineTab;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool scanFromAlbum; // @synthesize scanFromAlbum=_scanFromAlbum;
@property(nonatomic) int codeVersion; // @synthesize codeVersion=_codeVersion;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

