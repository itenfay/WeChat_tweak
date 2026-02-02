//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiMediaDownloadFavDataState
{
    NSString *_thumbFileKey;
    NSString *_dataFileKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataFileKey; // @synthesize dataFileKey=_dataFileKey;
@property(retain, nonatomic) NSString *thumbFileKey; // @synthesize thumbFileKey=_thumbFileKey;
- (void)onMediaDataDownloadSucc:(id)arg1 savePath:(id)arg2;
- (void)dowloadMediaData;
- (void)onThumbDataDownloadSucc:(id)arg1 savePath:(id)arg2;
- (void)downloadThumbData;
- (void)transformToNextState;
- (id)getStateName;
- (void)stop;
- (void)start;

@end

