//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniGameVideoFile, NSString;

@interface MiniGameVideoShareCacheInfo : NSObject
{
    MiniGameVideoFile *_videofile;
    NSString *_shareUrl;
    NSString *_shareThumbUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareThumbUrl; // @synthesize shareThumbUrl=_shareThumbUrl;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) MiniGameVideoFile *videofile; // @synthesize videofile=_videofile;
- (_Bool)isValid;
- (id)initWithVideoFile:(id)arg1 shareUrl:(id)arg2 shareThumbUrl:(id)arg3;

@end

