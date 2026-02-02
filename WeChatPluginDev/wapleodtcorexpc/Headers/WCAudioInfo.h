//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAudioInfo : NSObject
{
    _Bool _isHls;
    _Bool _useAVCore;
    _Bool _isLocalFile;
    _Bool _ignoreCache;
    float _playRate;
    float _startTime;
    NSString *_audioId;
    NSString *_dataUrl;
    NSString *_decryptKey;
    NSString *_fileCacheId;
    id _userData;
    NSString *_refer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *fileCacheId; // @synthesize fileCacheId=_fileCacheId;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) _Bool useAVCore; // @synthesize useAVCore=_useAVCore;
@property(nonatomic) _Bool isHls; // @synthesize isHls=_isHls;
@property(copy, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
- (id)init;

@end

