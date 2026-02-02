//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateMediaResource : NSObject
{
    unsigned long long _mediaType;
    NSString *_mediaUrl;
    NSString *_mediaId;
    NSString *_mediaFileMd5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mediaFileMd5; // @synthesize mediaFileMd5=_mediaFileMd5;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (id)description;
- (id)initWithResource:(id)arg1;

@end

