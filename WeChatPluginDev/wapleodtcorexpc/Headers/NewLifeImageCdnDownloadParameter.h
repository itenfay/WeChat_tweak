//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewLifeImageCdnDownloadParameter : NSObject
{
    _Bool _isThumb;
    NSString *_mediaId;
    NSString *_mediaURL;
    NSString *_savePath;
    long long _maxConcurrentCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)description;
- (_Bool)isValid;
- (id)init;

@end

